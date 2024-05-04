class Node:
    next = None
    data = None
    previous = None

    def __init__(self,data):
        self.data = data
        self.next = Node(None)
        self.previous = Node(None)


class DoubleLinkedList:

    dummy = Node(None)

    def __init__(self):
        self.dummy.previous = self.dummy
        self.dummy.next = self.dummy
    
    def addEnd(self,data):
        current = Node(data)
        if(self.dummy.next is self.dummy):
            self.dummy.next = current
            self.previous = current
        else:
            x = self.dummy
            while(x.next is not self.dummy):
                x = x.next
            x.next = current
            current.next = self.dummy.previous

    def printAll(self):
        current = self.dummy
        while(current.next is not self.dummy):  
            print(current.data)



        

if __name__ == "__main__":
    ll = DoubleLinkedList()

    ll.addEnd(2)
    ll.addEnd(90)
    ll.addEnd(5)
    ll.addEnd(133)
    ll.addEnd(8)
    ll.printAll()
