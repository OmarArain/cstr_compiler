import ply.lex as lex

class CSTR_Lexer(object):

    def __init__(self):
        self.last_token = None
    def build(self):
        self.lexer = lex.lex(object=self)
    def input(self, text):
        self.lexer.input(text)
    def token(self):
        self.last_token = self.lexer.token()
        return self.last_token
    reserved = {
       'if' : 'IF',
       'then' : 'THEN',
       'else' : 'ELSE',
       'while' : 'WHILE',
       'do'	   : 'DO',
       'int' : 'INT',
       'string' : 'STRING',
       'extern' : 'EXTERN',
       'return' : 'RETURN',
       'for'	: 'FOR'
    }
    tokens = [
    	"CONST_INT",
    	"CONST_STRING",
    	"IDENT",
    	"ASSIGNMENT",
    	"LESS",
    	"EQUAL",
    	"GREATER",
    	"LESSEQUAL",
    	"GREATEREQUAL",
    	"NOTEQUAL",
    	"ADD",
    	"SUBTRACT",
    	"MULTIPLY",
    	"DIVIDE",
    	"SHIFTLEFT",
    	"SHIFTRIGHT", 
    	"MODULO",
    	"LPARENS",
    	"RPARENS",
    	"SEMICOLON",
    	"LBRACKET",
    	"RBRACKET",
    	"COMMA"
    	] + list(reserved.values())

    t_CONST_INT   	  = r"[0-9]+"
    t_CONST_STRING    = r'\"(\\.|[^\\"])*\"'

    def t_IDENT(self, t):
        r'[a-zA-Z][0-9a-zA-Z_]*'
        t.type = self.reserved.get(t.value,'IDENT')    # Check for reserved words
        return t

    t_ASSIGNMENT      = r"="
    t_LESS            = r"<"
    t_EQUAL           = r"=="
    t_GREATER         = r">"
    t_LESSEQUAL       = r"<="
    t_GREATEREQUAL    = r">="
    t_NOTEQUAL        = r"!="
    t_ADD             = r"\+"
    t_SUBTRACT        = r"-"
    t_MULTIPLY        = r"\*"
    t_DIVIDE          = r"/"
    t_SHIFTRIGHT      = r">>"
    t_SHIFTLEFT       = r"<<"
    t_MODULO          = r"%"
    t_LPARENS		  = r'\('
    t_RPARENS 		  = r'\)'
    t_SEMICOLON 	  = r';'
    t_LBRACKET		  = r'{'
    t_RBRACKET 		  = r'}'
    t_COMMA 		  = r','
    t_ignore = " \t\n"

    def t_error(self, t):
        print("Illegal character '%s'" % t.value[0])
        t.lexer.skip(1)

# data = '''
#     main() {
#       int i;
#       i = 0;
#       while ( i < 10 ) {
#         printd(i);
#         i = i+2;
#       }
#       for ( i = -10; i <= 10; i = i+1 )
#         printd(i);
#       i = 0;
#       do {
#         printd(i);
#         i = i-1;
#       } while ( i >= -20 );
#       return 0;
#     }
#     '''
# lexer = CSTR_Lexer()
# lexer.build()
# lexer.input(data)

# while True:
# 	tok = lexer.token()
# 	if not tok:
# 		break
# 	print(tok)