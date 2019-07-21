"""
    Linked List - data and next
        
    Some of the operations that will be performed wlll be:
    * getSize()
    * find(data)
    * add(data)
    * remove(data)
"""

class Node(object):
    def __init__(self, d, n = None):
        self.data = d
        self.next_node = n

    def get_next(self):
        return self.next_node

    def set_next(self, n):
        self.next_node = n

    def get_data(self):
        return self.data

    def set_data(self,d):
        self.data = d

class LinkedList (object):
    def __init__(self, r=None):
        self
