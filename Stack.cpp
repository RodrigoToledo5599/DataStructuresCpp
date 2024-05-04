#include <cstdio>
#include <iostream>


template<typename T>
class StackNode{
public:
    T data;
    StackNode *next;
    StackNode *prev;

    StackNode(T value){
        this->data = value;
    }

};


class Stack{
private: 
    StackNode<int> *last;

public:
    Stack(){
        this->last = nullptr;
    };

    void push (int value){
        StackNode<int> *valueAdded = new StackNode<int>(value);
        if(this->last == nullptr){
            this->last = valueAdded;
        };
        this->last->next = valueAdded;
        valueAdded->prev = this->last;
        this->last = this->last->next;
    };

    void show(){
        /*return this->last->data;*/
        std::cout << this->last->data;
    };

    void pop(){
        if(this->last == nullptr){
            std::cout << "Stack vazia";
        };
        this->last = this->last->prev;
        this->last->next = nullptr;
    };


};

