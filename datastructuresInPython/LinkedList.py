class Node:
    next = None
    data = None
    def __init__(self,data):
        self.data = data

class LinkedList:

    head = None
    tail = None
    
    def __init__(self):
        ...

# Esse metodo de push q eu ainda não entendi
    def push(self,value):
        current = Node(value)
        if(self.head is None):
            self.head = current
            self.head.next = self.tail
        else:
            self.tail.next = current
        self.tail = current
#===========================================
    def pop(self):
        self.head = self.head.next

    def dequeue(self):
        current = self.head 
        while(current.next is not self.tail):
            current = current.next
        current.next = None
        self.tail = current

    def showLinkedList(self):
        current = self.head
        while(current is not None):
            print(current.data)
            current = current.next
        
    def showHeadAndTail(self):
        print("head: ",self.head.data,"\ntail: ",self.tail.data)    







if __name__ == "__main__":
    
    ll = LinkedList()
    
    ll.push(2)
    ll.push(34)
    ll.push(9)
    ll.push(8)
    ll.push(44)
    ll.push(4)
    ll.push(54)
    ll.dequeue()
    ll.showLinkedList()
    ll.showHeadAndTail()