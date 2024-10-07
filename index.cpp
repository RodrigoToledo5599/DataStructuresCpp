#include <iostream>
#include "LinkedList.cpp"
#include "Stack.cpp"
#include "Queue.cpp"
#include "DoubleLinkedList.cpp"
#include "SEList.cpp"


int main(){
    Queue q = Queue();
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(12);
    q.enqueue(2);
    q.enqueue(3412);
    q.enqueue(542);
    q.enqueue(99);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.show();
    
    std::cout << "\n\n\n\n\n\n";

    return 0;
}