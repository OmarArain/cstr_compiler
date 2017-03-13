#-----------------------------------------------------------------
# ** ATTENTION **
# This code was automatically generated from the file:
# ast_cfg.cfg
#
# Do not modify it directly. Modify the configuration file and
# run the generator again.
# ** ** *** ** **
#
# pycparser: c_ast.py
#
# AST Node classes.
#
# Eli Bendersky [http://eli.thegreenplace.net]
# License: BSD
#-----------------------------------------------------------------

import sys
class Node(object):
    __slots__ = ()
    """ Abstract base class for AST nodes.
    """
    def children(self):
        """ A sequence of all children that are Nodes
        """
        pass
    def show(self, buf=sys.stdout, offset=0, attrnames=False, nodenames=False, showcoord=False, _my_node_name=None):
        """ Pretty print the Node and all its attributes and
            children (recursively) to a buffer.
            buf:
                Open IO buffer into which the Node is printed.
            offset:
                Initial offset (amount of leading spaces)
            attrnames:
                True if you want to see the attribute names in
                name=value pairs. False to only see the values.
            nodenames:
                True if you want to see the actual node names
                within their parents.
            showcoord:
                Do you want the coordinates of each Node to be
                displayed.
        """
        lead = ' ' * offset
        if nodenames and _my_node_name is not None:
            buf.write(lead + self.__class__.__name__+ ' <' + _my_node_name + '>: ')
        else:
            buf.write(lead + self.__class__.__name__+ ': ')
        if self.attr_names:
            if attrnames:
                nvlist = [(n, getattr(self,n)) for n in self.attr_names]
                attrstr = ', '.join('%s=%s' % nv for nv in nvlist)
            else:
                vlist = [getattr(self, n) for n in self.attr_names]
                attrstr = ', '.join('%s' % v for v in vlist)
            buf.write(attrstr)
        if showcoord:
            buf.write(' (at %s)' % self.coord)
        buf.write('\n')
        for (child_name, child) in self.children():
            child.show(
                buf,
                offset=offset + 2,
                attrnames=attrnames,
                nodenames=nodenames,
                showcoord=showcoord,
                _my_node_name=child_name)
class NodeVisitor(object):
    """ A base NodeVisitor class for visiting c_ast nodes.
        Subclass it and define your own visit_XXX methods, where
        XXX is the class name you want to visit with these
        methods.
        For example:
        class ConstantVisitor(NodeVisitor):
            def __init__(self):
                self.values = []
            def visit_Constant(self, node):
                self.values.append(node.value)
        Creates a list of values of all the constant nodes
        encountered below the given node. To use it:
        cv = ConstantVisitor()
        cv.visit(node)
        Notes:
        *   generic_visit() will be called for AST nodes for which
            no visit_XXX method was defined.
        *   The children of nodes for which a visit_XXX was
            defined will not be visited - if you need this, call
            generic_visit() on the node.
            You can use:
                NodeVisitor.generic_visit(self, node)
        *   Modeled after Python's own AST visiting facilities
            (the ast module of Python 3.0)
    """
    def visit(self, node):
        """ Visit a node.
        """
        method = 'visit_' + node.__class__.__name__
        visitor = getattr(self, method, self.generic_visit)
        return visitor(node)
    def generic_visit(self, node):
        """ Called if no explicit visitor function exists for a
            node. Implements preorder visiting of the node.
        """
        for c_name, c in node.children():
            self.visit(c)
class Constant (Node):
    __slots__ = ('_type', 'value', 'coord', '__weakref__')
    def __init__(self, _type, value, coord=None):
        self._type = _type
        self.value = value
        self.coord = coord

    def children(self):
        nodelist = []
        return tuple(nodelist)

    attr_names = ('_type', 'value', )

class Ident (Node):
    __slots__ = ('name', 'offset', '_type', 'coord', '__weakref__')
    def __init__(self, name, offset, _type, coord=None):
        self.name = name
        self.offset = offset
        self._type = _type
        self.coord = coord

    def children(self):
        nodelist = []
        return tuple(nodelist)

    attr_names = ('name', 'offset', '_type', )

class ExpressionList (Node):
    __slots__ = ('expressions', 'coord', '__weakref__')
    def __init__(self, expressions, coord=None):
        self.expressions = expressions
        self.coord = coord

    def children(self):
        nodelist = []
        for i, child in enumerate(self.expressions or []):
            nodelist.append(("expressions[%d]" % i, child))
        return tuple(nodelist)

    attr_names = ()

class UnaryOp (Node):
    __slots__ = ('expression', 'operator', 'coord', '__weakref__')
    def __init__(self, expression, operator, coord=None):
        self.expression = expression
        self.operator = operator
        self.coord = coord

    def children(self):
        nodelist = []
        if self.expression is not None: nodelist.append(("expression", self.expression))
        return tuple(nodelist)

    attr_names = ('operator', )

class BinaryOp (Node):
    __slots__ = ('operator', 'lhs', 'rhs', 'coord', '__weakref__')
    def __init__(self, operator, lhs, rhs, coord=None):
        self.operator = operator
        self.lhs = lhs
        self.rhs = rhs
        self.coord = coord

    def children(self):
        nodelist = []
        if self.lhs is not None: nodelist.append(("lhs", self.lhs))
        if self.rhs is not None: nodelist.append(("rhs", self.rhs))
        return tuple(nodelist)

    attr_names = ('operator', )

class Return(Node):
    __slots__ = ('expression', 'coord', '__weakref__')
    def __init__(self, expression, coord=None):
        self.expression = expression
        self.coord = coord

    def children(self):
        nodelist = []
        if self.expression is not None: nodelist.append(("expression", self.expression))
        return tuple(nodelist)

    attr_names = ()

class For (Node):
    __slots__ = ('initial', 'condition', '_next', 'statement', 'coord', '__weakref__')
    def __init__(self, initial, condition, _next, statement, coord=None):
        self.initial = initial
        self.condition = condition
        self._next = _next
        self.statement = statement
        self.coord = coord

    def children(self):
        nodelist = []
        if self.initial is not None: nodelist.append(("initial", self.initial))
        if self.condition is not None: nodelist.append(("condition", self.condition))
        if self._next is not None: nodelist.append(("_next", self._next))
        if self.statement is not None: nodelist.append(("statement", self.statement))
        return tuple(nodelist)

    attr_names = ()

class DoWhile (Node):
    __slots__ = ('condition', 'statement', 'coord', '__weakref__')
    def __init__(self, condition, statement, coord=None):
        self.condition = condition
        self.statement = statement
        self.coord = coord

    def children(self):
        nodelist = []
        if self.condition is not None: nodelist.append(("condition", self.condition))
        if self.statement is not None: nodelist.append(("statement", self.statement))
        return tuple(nodelist)

    attr_names = ()

class While (Node):
    __slots__ = ('condition', 'statement', 'coord', '__weakref__')
    def __init__(self, condition, statement, coord=None):
        self.condition = condition
        self.statement = statement
        self.coord = coord

    def children(self):
        nodelist = []
        if self.condition is not None: nodelist.append(("condition", self.condition))
        if self.statement is not None: nodelist.append(("statement", self.statement))
        return tuple(nodelist)

    attr_names = ()

class If (Node):
    __slots__ = ('condition', '_true', '_false', 'coord', '__weakref__')
    def __init__(self, condition, _true, _false, coord=None):
        self.condition = condition
        self._true = _true
        self._false = _false
        self.coord = coord

    def children(self):
        nodelist = []
        if self.condition is not None: nodelist.append(("condition", self.condition))
        if self._true is not None: nodelist.append(("_true", self._true))
        if self._false is not None: nodelist.append(("_false", self._false))
        return tuple(nodelist)

    attr_names = ()

class Compound (Node):
    __slots__ = ('statements', 'coord', '__weakref__')
    def __init__(self, statements, coord=None):
        self.statements = statements
        self.coord = coord

    def children(self):
        nodelist = []
        for i, child in enumerate(self.statements or []):
            nodelist.append(("statements[%d]" % i, child))
        return tuple(nodelist)

    attr_names = ()

class Assignment (Node):
    __slots__ = ('lhs', 'rhs', 'coord', '__weakref__')
    def __init__(self, lhs, rhs, coord=None):
        self.lhs = lhs
        self.rhs = rhs
        self.coord = coord

    def children(self):
        nodelist = []
        if self.rhs is not None: nodelist.append(("rhs", self.rhs))
        return tuple(nodelist)

    attr_names = ('lhs', )

class Parameter (Node):
    __slots__ = ('name', 'type', 'coord', '__weakref__')
    def __init__(self, name, type, coord=None):
        self.name = name
        self.type = type
        self.coord = coord

    def children(self):
        nodelist = []
        return tuple(nodelist)

    attr_names = ('name', 'type', )

class FunctionDecl (Node):
    __slots__ = ('name', 'parameters', '_type', 'coord', '__weakref__')
    def __init__(self, name, parameters, _type, coord=None):
        self.name = name
        self.parameters = parameters
        self._type = _type
        self.coord = coord

    def children(self):
        nodelist = []
        if self.parameters is not None: nodelist.append(("parameters", self.parameters))
        return tuple(nodelist)

    attr_names = ('name', '_type', )

class IdentDecl (Node):
    __slots__ = ('name', '_type', 'coord', '__weakref__')
    def __init__(self, name, _type, coord=None):
        self.name = name
        self._type = _type
        self.coord = coord

    def children(self):
        nodelist = []
        return tuple(nodelist)

    attr_names = ('name', '_type', )

class FunctionDef (Node):
    __slots__ = ('funcdecl', 'statements', 'numlcls', 'coord', '__weakref__')
    def __init__(self, funcdecl, statements, numlcls, coord=None):
        self.funcdecl = funcdecl
        self.statements = statements
        self.numlcls = numlcls
        self.coord = coord

    def children(self):
        nodelist = []
        if self.funcdecl is not None: nodelist.append(("funcdecl", self.funcdecl))
        if self.statements is not None: nodelist.append(("statements", self.statements))
        return tuple(nodelist)

    attr_names = ('numlcls', )

class Program (Node):
    __slots__ = ('declarations', 'coord', '__weakref__')
    def __init__(self, declarations, coord=None):
        self.declarations = declarations
        self.coord = coord

    def children(self):
        nodelist = []
        for i, child in enumerate(self.declarations or []):
            nodelist.append(("declarations[%d]" % i, child))
        return tuple(nodelist)

    attr_names = ()

class FunctionCall (Node):
    __slots__ = ('name', 'args', 'coord', '__weakref__')
    def __init__(self, name, args, coord=None):
        self.name = name
        self.args = args
        self.coord = coord

    def children(self):
        nodelist = []
        if self.args is not None: nodelist.append(("args", self.args))
        return tuple(nodelist)

    attr_names = ('name', )

class DeclList (Node):
    __slots__ = ('declarations', 'coord', '__weakref__')
    def __init__(self, declarations, coord=None):
        self.declarations = declarations
        self.coord = coord

    def children(self):
        nodelist = []
        for i, child in enumerate(self.declarations or []):
            nodelist.append(("declarations[%d]" % i, child))
        return tuple(nodelist)

    attr_names = ()

class ParamList (Node):
    __slots__ = ('parameters', 'coord', '__weakref__')
    def __init__(self, parameters, coord=None):
        self.parameters = parameters
        self.coord = coord

    def children(self):
        nodelist = []
        for i, child in enumerate(self.parameters or []):
            nodelist.append(("parameters[%d]" % i, child))
        return tuple(nodelist)

    attr_names = ()

class StatementList (Node):
    __slots__ = ('statements', 'coord', '__weakref__')
    def __init__(self, statements, coord=None):
        self.statements = statements
        self.coord = coord

    def children(self):
        nodelist = []
        for i, child in enumerate(self.statements or []):
            nodelist.append(("statements[%d]" % i, child))
        return tuple(nodelist)

    attr_names = ()

class Assignee (Node):
    __slots__ = ('name', 'offset', '_type', 'coord', '__weakref__')
    def __init__(self, name, offset, _type, coord=None):
        self.name = name
        self.offset = offset
        self._type = _type
        self.coord = coord

    def children(self):
        nodelist = []
        return tuple(nodelist)

    attr_names = ('name', 'offset', '_type', )

