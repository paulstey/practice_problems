#!/anaconda/bin/python

from __future__ import print_function


class Node:

    def __init__(self, val):
        self.val = val
        self.neighbor = None

    def add_neighbor(self, neighbor_val):
        self.neighbor = Node(neighbor_val)

    def has_neighbor(self):
        res = True
        
        if self.neighbor == None:
            res = False
            #raise(BaseException, "Error: Node has no neighbor")
        return res


def make_list(node, values, idx):
    
    n_elems = len(values)
    
    if idx < n_elems:
        node.add_neighbor(values[idx])

        if idx + 1 < n_elems + 1:
            make_list(node.neighbor, values, idx + 1)
    else:
        return None


def printlist(node, idx = 0):    
    print("Node ", idx, ": ", node.val)
    if node.has_neighbor():
        printlist(node.neighbor, idx + 1)



if __name__ == "__main__":
    xlist = Node(3.14)
    make_list(xlist, [137, 2.71, 36, 41, 59], 0)
    printlist(xlist)

    
