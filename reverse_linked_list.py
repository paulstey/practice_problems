#!/anaconda/bin/python


# NOTE: This code is still in progress. The swap_with_neighbor() method
# does what is required, but now it needs to be applied to all elements


from __future__ import print_function


class List:
    def __init__(self):
        self.head = Node(None, None)
        self.tail = Node(None, self.head)
        self.head.neighbor = self.tail
        
        
    def append(self, val):  
        # `left_neighbor` has `val` None at `head`
        if self.tail.left_neighbor.val == None:   
            node = Node(val, self.head)
            self.head.neighbor = node
            self.tail.left_neighbor = node
        else:
            node_left_neighbor = self.tail.left_neighbor
            node = Node(val, node_left_neighbor)
            node.add_neighbor(None)                      # this is `tail` now
            self.tail = node.neighbor

        

class Node:
    def __init__(self, val, left_neighbor):
        self.val = val
        self.left_neighbor = left_neighbor
        self.neighbor = None

    def add_neighbor(self, neighbor_val):
        self.neighbor = Node(neighbor_val, self)
        
    def has_neighbor(self):
        res = self.neighbor != None
        return res

    def swap_with_neighbor(self):
        third_neighbor = self.neighbor.neighbor
        
        self.neighbor.neighbor = self
        print("Val: ", self.neighbor.neighbor.val)
        self.neighbor = third_neighbor        



def growlist(node, values, idx):

    n_elems = len(values)

    if idx < n_elems:
        node.add_neighbor(values[idx])

        if (idx + 1) < (n_elems + 1):
            growlist(node.neighbor, values, idx + 1)
    else:
        return None


def printlist(node, idx = 0):
    print("Node ", idx, ": ", node.val)

    if node.has_neighbor():
        printlist(node.neighbor, idx + 1)



def reverselist(node, n_swaps = None):
    if n_swaps == None:
        node.swap_with_neighbor()
    
        

        

if __name__ == "__main__":
    xlist = Node(3.14)
    growlist(xlist, [137, 2.71, 36, 41, 59], 0)
    printlist(xlist)
    new_list = xlist.neighbor
    reverselist(xlist)
    printlist(new_list)
    
