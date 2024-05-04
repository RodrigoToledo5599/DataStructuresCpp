#include <cstdio>
#include <iostream>


template<typename T>
class QueueNode{
public:
    T data;
    QueueNode *next;
    QueueNode *prev;

    QueueNode(T value){
        this->data = value;
    }

};

class Queue{
private:
    QueueNode<int> *first;
    QueueNode<int> *last;

public:
    Queue(){
        this->first = nullptr;
    };

    void push(int value){
        QueueNode<int> *valueAdded = new QueueNode<int>(value);
        if(this->first == nullptr){
            this->first = valueAdded;
            this->last = valueAdded;
            std::cout << "A\n";
        }
        //std::cout << this->first << "  " << this->last << std::endl;
        this->last->next = valueAdded;
        this->last->next->prev = this->last->next;
        this->last = valueAdded;
        //delete valueAdded;
    };

    bool pop(){
        if(this->first == nullptr){
            std::cout << "fila vazia";
            return false;
        }
        this->first = this->first->next;
        //this->first->prev = nullptr;
        return true;
    };

    void show(){
        std::cout << "primeiro:  " << this->first->data << "  ultimo:  " << this->last->data << std::endl;
    };

};