#include <iostream>
#include "LinkedList.cpp"
#include "Stack.cpp"
#include "Queue.cpp"
#include "DoubleLinkedList.cpp"


int main(){
    DoubleLinkedList q = DoubleLinkedList();
    q.push(11);
    q.push(22);
    q.push(33);
    q.push(44);
    q.push(55);
    q.push(66);
    q.deleteNode(4);
    //q.pushToPosition(0,10);
    //q.changeInPosition(0,3); 
    q.show();
    return 0;
}