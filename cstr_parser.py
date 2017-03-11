import ply.yacc as yacc
import logging
from cstr_lexer import CSTR_Lexer

LOG_FORMAT = '%(filename)s:%(funcName)s: %(message)s'
LOG_LEVEL = logging.ERROR

def initialize_logger(fmt, level):
    logger = logging.getLogger('JackCompiler')
    logger.setLevel(level)
    formatter = logging.Formatter(fmt)
    # fh = logging.FileHandler('JackCompiler.log')
    # fh.setFormatter(formatter)
    # fh.setLevel(logging.DEBUG)
    # logger.addHandler(fh)
    sh = logging.StreamHandler()
    sh.setFormatter(formatter)
    sh.setLevel(level)
    logger.addHandler(sh)
    logger.info('Initializing logging.')
    return logger

class Node:
    def __init__(self,type,children=None,leaf=None):
         self.type = type
         if children:
              self.children = children
         else:
              self.children = [ ]
         self.leaf = leaf

class CSTR_Parser:
    def __init__(self):
        self.cstr_lexer = CSTR_Lexer()
        self.cstr_lexer.build()
        self.tokens = self.cstr_lexer.tokens
        self.cstr_parser = yacc.yacc(module=self)
        self.symbol_table_stack = [dict()]
        self.current_token = None
        self.cstr_lexer.build()

    current_scope = 0
    precedence = (
        ('left', 'THEN'),
        ('left', 'ELSE'),
        )
    def parse(self, text):
        self.symbol_table_stack = [dict()]
        self.current_token = None
        return self.cstr_parser.parse(input=text)

    def _push_scope(self):
        self.symbol_table_stack.append(dict())

    def _pop_scope(self):
        assert len(self._scope_stack) > 1
        self.symbol_table_stack.pop()

    def _add_identifier(self, name, coord):
        """ Add a new object, function, or enum member name (ie an ID) to the
            current scope
        """
        if self.symbol_table_stack[-1].get(name, False):
            self._parse_error(
                "Non-typedef %r previously declared as typedef "
                "in this scope" % name, coord)
        self.symbol_table_stack[-1][name] = False

    def _is_type_in_scope(self, name):
        """ Is *name* a typedef-name in the current scope?
        """
        for scope in reversed(self.symbol_table_stack):
            in_scope = scope.get(name)
            if in_scope is not None: return in_scope
        return False

    def p_program_1(self, p):
        'program : external_declaration'

    def p_program_2(self, p):
        'program : program external_declaration'
        pass
    def p_external_declaration_1(self, p):
        'external_declaration : declaration'
        pass
    def p_external_declaration_2(self, p):
        'external_declaration : EXTERN declaration'
        pass
    def p_external_declaration_3(self, p):
        'external_declaration : function_definition'
        pass
    def p_function_definition(self, p):
        'function_definition : type function_declarator compound_instruction'
        pass
    # def p_decl_gbl_fct(p):
    #   'decl_glbl_fct :'

    def p_declaration(self, p):
        'declaration : type declarator_list SEMICOLON'
        pass
    def p_type_1(self, p):
        'type : INT'
        pass
    def p_type_2(self, p):
        'type : STRING'
        pass
    def p_declarator_list_1(self, p):
        'declarator_list : declarator'
        pass
    def p_declarator_list_2(self, p):
        'declarator_list : declaration_list COMMA declarator'
        pass
    def p_declaration_list_1(self, p):
        'declaration_list : declaration'
        pass
    def p_declaration_list_2(self, p):
        'declaration_list : declaration_list declaration'
        pass
    def p_declarator_1(self, p):
        'declarator : IDENT'
        pass
    def p_declarator_2(self, p):
        'declarator : function_declarator'
        pass
    def p_function_declarator_1(self, p):
        'function_declarator : IDENT LPARENS RPARENS'
        pass
    def p_function_declarator_2(self, p):
        'function_declarator : IDENT LPARENS parameter_list RPARENS'
        pass
    def p_parameter_list_1(self, p):
        'parameter_list : parameter_declaration'
        pass
    def p_parameter_list_2(self, p):
        'parameter_list : parameter_list COMMA parameter_declaration'
        pass
    def p_parameter_declaration(self, p):
        'parameter_declaration : type IDENT'
        pass
    def p_instruction_1(self, p):
        'instruction : SEMICOLON'
        pass
    def p_instruction_2(self, p):
        'instruction : compound_instruction'
        pass
    def p_instruction_3(self, p):
        'instruction : expression_instruction'
        pass
    def p_instruction_4(self, p):
        'instruction : iteration_instruction'
        pass
    def p_instruction_5(self, p):
        'instruction : select_instruction'
        pass
    def p_instruction_6(self, p):
        'instruction : jump_instruction'
        pass
    def p_expression_instruction1(self, p):
        'expression_instruction : expression SEMICOLON'
        pass
    def p_expression_instruction2(self, p):
        'expression_instruction : assignment SEMICOLON'
        pass
    def p_assignment(self, p):
        'assignment : IDENT ASSIGNMENT expression'
        pass
    def p_compound_instruction_1(self, p):
        'compound_instruction : block_start declaration_list instruction_list block_end'
        pass
    def p_compound_instruction_2(self, p):
        'compound_instruction : block_start declaration_list block_end'
        pass
    def p_compound_instruction_3(self, p):
        'compound_instruction : block_start instruction_list block_end'
        pass
    def p_compound_instruction_4(self, p):
        'compound_instruction : block_start block_end'
        pass

    def p_block_start(self, p):
        'block_start : LBRACKET'

        pass
    def p_block_end(self, p):
        'block_end : RBRACKET'
        self.current_scope-=1
        pass

    def p_instruction_list1(self, p):
        'instruction_list : instruction'
        pass
    def p_instruction_list2(self, p):
        'instruction_list : instruction_list instruction'
        pass
    def p_select_instruction_1(self, p):
        'select_instruction  : cond_instruction THEN instruction'
        pass
    def p_select_instruction_2(self, p):
        'select_instruction  : cond_instruction THEN instruction ELSE instruction'
        pass
    def p_cond_instruction(self, p):
        'cond_instruction  : IF LPARENS condition RPARENS'
        pass
    def p_iteration_instruction_1(self, p):
        'iteration_instruction : WHILE LPARENS condition RPARENS instruction'
        pass
    def p_iteration_instruction_2(self, p):
        'iteration_instruction : DO instruction WHILE LPARENS condition RPARENS'
        pass
    def p_iteration_instruction_3(self, p):
        'iteration_instruction : FOR LPARENS assignment SEMICOLON condition SEMICOLON assignment RPARENS instruction'
        pass
    def p_jump_instruction(self, p):
        'jump_instruction  : RETURN expression SEMICOLON'
        pass
    def p_condition(self, p):
        'condition : expression comparison_operator expression'
        pass
    def p_comparison_operator_1(self, p):
        "comparison_operator : EQUAL"
        pass
    def p_comparison_operator_2(self, p):
        "comparison_operator : NOTEQUAL"
        pass
    def p_comparison_operator_3(self, p):
        "comparison_operator : LESS"
        pass
    def p_comparison_operator_4(self, p):
        "comparison_operator : GREATER"
        pass
    def p_comparison_operator_5(self, p):
        "comparison_operator : LESSEQUAL"
        pass
    def p_comparison_operator_6(self, p):
        "comparison_operator : GREATEREQUAL"
        pass
    def p_expression_1(self, p):
        'expression  : expression_additive'
        pass
    def p_expression_2(self, p):
        'expression : SHIFTLEFT expression_additive'
        pass
    def p_expression_3(self, p):
        'expression : SHIFTRIGHT expression_additive'
        pass
    def p_expression_additive_1(self, p):
        'expression_additive : expression_multiplicative'
        pass
    def p_expression_additive_2(self, p):
        'expression_additive : expression_additive ADD expression_multiplicative'
        pass
    def p_expression_additive_3(self, p):
        'expression_additive : expression_additive SUBTRACT expression_multiplicative'
        pass
    def p_expression_multiplicative_1(self, p):
        'expression_multiplicative : unary_expression'
        pass
    def p_expression_multiplicative_2(self, p):
        'expression_multiplicative : expression_multiplicative MULTIPLY unary_expression'
        pass
    def p_expression_multiplicative_3(self, p):
        'expression_multiplicative : expression_multiplicative DIVIDE unary_expression'
        pass
    def p_expression_multiplicative_4(self, p):
        'expression_multiplicative : expression_multiplicative MODULO unary_expression'
        pass

    def p_unary_expression_1(self, p):
        'unary_expression : postfix_expression'
        pass

    def p_unary_expression_2(self, p):
        'unary_expression : SUBTRACT unary_expression'
        pass

    def p_postfix_expression_1(self, p):
        'postfix_expression : primary_expression'
        pass

    def p_postfix_expression_2(self, p):
        'postfix_expression : IDENT LPARENS argument_expression_list RPARENS'
        pass

    def p_postfix_expression_3(self, p):
        'postfix_expression : IDENT LPARENS RPARENS'
        pass

    def p_argument_expression_list_1(self, p):
        'argument_expression_list : expression'
        pass

    def p_argument_expression_list_2(self, p):
        'argument_expression_list : argument_expression_list COMMA expression'
        pass

    def p_primary_expression_1(self, p):
        'primary_expression : IDENT'
        p[0] = p[1]

    def p_primary_expression_2(self, p):
        'primary_expression : CONST_INT'
        p[0] = p[1]

    def p_primary_expression_3(self, p):
        'primary_expression : CONST_STRING'
        p[0] = p[1]
        

    def p_primary_expression_4(self, p):
        'primary_expression : LPARENS expression RPARENS'
        p[0] = p[2]

    # Error rule for syntax errors
    def p_error(self, p):
        print("Syntax error in input!")
        print(p)


# Build the parser
parser = CSTR_Parser()

s = '''

int main() {
  int i;
  i = 0;
  while ( i < 10 ) {
    printd(i);
    i = i+2;
  }
  for ( i = -10; i <= 10; i = i+1 )
    printd(i);
  i = 0;
  do {
    printd(i);
    i = i-1;
  } while ( i >= -20 );
  return 0;
}
'''


st_stack = [];
symbol_table = {}
#symbol table - scope - id - 

result = parser.parse(s)
print(result)
