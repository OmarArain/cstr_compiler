import logging

class SymbolRecord(object):
    def __init__(self, name, _type, kind, var_num=0,
                 param_list=[], param_types=[]):
        self.name = name
        self.type = _type
        # which # local it is in scope, automatically added by add_symbol
        self.var_num = var_num 
        self.kind = kind #function or variable
        self.param_list = param_list
        self.param_types = param_types

class CSTR_SymbolTable(object):
    """
        stores
        {name, type, kind (function or var), 
            index (incrementd, used only if variable), 
            param_list (usesd only if function),
            param_types (used only if function)} 
    """
    def __init__(self):
        self.symbol_table_stack = [dict()]
        self.current_symbol_table = self.symbol_table_stack[-1]
        self.current_num_vars = 0;
        self.logger = logging.getLogger('CSTR_Compiler.CSTR_SymbolTable')
        self.logger.info("initialised symtab")

    def add_symbol(self, name, symbol_record):
        ##add to current scope
        symrec = self.lookup_symbol_in_scope(name)
        if symrec is None:
            if symbol_record.kind == 'variable':
                self.current_num_vars+=1
                symbol_record.var_num = self.current_num_vars
            self.current_symbol_table[name] = symbol_record
            print("%s added to symbol_table"%(name))
            print(self.symbol_table_stack)
            return self.current_num_vars
        else:
            self.logger.error("%s is already declared in scope"%(name))
            return -1

    def lookup_symbol(self, name):
        ##lookup in ALL SCOPES
        for symbol_table in reversed(self.symbol_table_stack):
            symrec = symbol_table.get(name)
            if symrec is not None: return symrec
        return None

    def lookup_symbol_in_scope(self, name):
        symrec = self.current_symbol_table.get(name)
        if symrec is not None: return symrec
        return None
    
    def enter_new_scope(self):
        self.symbol_table_stack.append(dict())
        self.current_symbol_table = self.symbol_table_stack[-1]
        self.current_num_vars = 0

    def leave_scope(self):
        self.symbol_table_stack.pop()
        self.current_symbol_table = self.symbol_table_stack[-1]
        num_vars = 0
        for name,rec in self.current_symbol_table.items():
            if rec.kind == 'variable':
                num_vars+=1
        self.current_num_vars = num_vars

    def print_tables(self):
        print(self.current_symbol_table)
        pass
