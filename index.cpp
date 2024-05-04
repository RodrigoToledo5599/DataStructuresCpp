#include <iostream>
#include "LinkedList.cpp"
#include "Stack.cpp"
#include "Queue.cpp"
#include "DoubleLinkedList.cpp"


int main(){ 
    LinkedList q = LinkedList();
    q.push(11);
    q.push(22);
    q.push(33);
    q.push(44);
    q.pop();
    q.show();
    return 0;
}