"""
Ниже (в текстовом поле) приведена программа, как пример реализации бинарного дерева на языке Python.

Модифицируйте ее так, чтобы при обходе вершин в глубину сначала перебиралось правое поддерево, затем - левое поддерево, а потом отображалось значение текущей вершины.
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.left = self.right = None


class Tree:
    def __init__(self):
        self.root = None

    def __find(self, node, parent, value):
        if node is None:
            return None, parent, False

        if value == node.data:
            return node, parent, True

        if value < node.data:
            if node.left:
                return self.__find(node.left, node, value)

        if value > node.data:
            if node.right:
                return self.__find(node.right, node, value)

        return node, parent, False

    def append(self, obj):
        if self.root is None:
            self.root = obj
            return obj

        s, p, fl_find = self.__find(self.root, None, obj.data)

        if not fl_find and s:
            if obj.data < s.data:
                s.left = obj
            else:
                s.right = obj

        return obj

    def show_tree(self, node):
        if node is None:
            return
        self.show_tree(node.right)
        self.show_tree(node.left)
        
        print(node.data, end=" ")
        
    def show_wide_tree(self, node):
        if node is None:
            return

        v = [node]
        while v:
            vn = []
            for x in v:
                
                if x.left:
                    vn += [x.left]
                if x.right:
                    vn += [x.right]
                print(x.data, end=" ")
            v = vn

    def __del_leaf(self, s, p):
        if p.left == s:
            p.left = None
        elif p.right == s:
            p.right = None

    def __del_one_child(self, s, p):
        if p.left == s:
            if s.left is None:
                p.left = s.right
            elif s.right is None:
                p.left = s.left
        elif p.right == s:
            if s.left is None:
                p.right = s.right
            elif s.right is None:
                p.right = s.left

    def __find_min(self, node, parent):
        if node.left:
            return self.__find_min(node.left, node)

        return node, parent

    def del_node(self, key):
        s, p, fl_find = self.__find(self.root, None, key)

        if not fl_find:
            return None

        if s.left is None and s.right is None:
            self.__del_leaf(s, p)
        elif s.left is None or s.right is None:
            self.__del_one_child(s, p)
        else:
            sr, pr = self.__find_min(s.right, s)
            s.data = sr.data
            self.__del_one_child(sr, pr)