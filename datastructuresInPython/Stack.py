class StackNode:
    next = None
    data = None
    prev = None
    def __init__(self,dataValue):
        self.data = dataValue

class Stack:
    last = None
    def __init__(self):
        ...

    def push(self,value):
        valueToBeAdded = StackNode(value)
        if(self.last is None):
            self.last = valueToBeAdded
        self.last.next = valueToBeAdded
        valueToBeAdded.prev = self.last
        self.last = self.last.next
    
    def show(self):
        if(self.last is StackNode(None)):
            print("none")
        print(self.last.data)

    def pop(self):
        if(self.last.data is None):
            return ...
        self.last = self.last.prev
        #self.last.next = None


if __name__ == "__main__":

    st = Stack()
    st.push(3)
    st.push(90)
    st.push(67)
    st.push(0)
    st.push(54)
    st.push(104)
    st.pop()
    st.pop()
    st.pop()
    st.pop()
    st.pop()
    st.pop()
    st.pop()
    st.pop()
    st.pop()
    st.show()