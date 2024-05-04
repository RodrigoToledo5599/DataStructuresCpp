#include <iostream>
#include <cstdio>

class LLNode{
public:
    int data;
    LLNode *next;

    LLNode(int value){
        this->data = value;
    }
};

class LinkedList{
private:
    LLNode* head;
    LLNode* tail;
    
public:
    LinkedList(){
        this->head = nullptr;
        this->tail = nullptr;
    }

    void push(int value){
        LLNode* newNode = new LLNode(value);
        if(this->head == nullptr){
            this->head = newNode;
            this->tail = newNode;
        }
        this->tail->next = newNode;
        this->tail = newNode;
        
    };

    void pop(){
        LLNode *current = this->head;
        while(current->next != this->tail){
            current = current->next;
        }
        current->next = nullptr;
        this->tail = current;
    };

    void show(){
        LLNode *current = this->head;
        while(current != this->tail){
            std::cout << current->data << "\n";
            current = current->next;
        }
        std::cout << current->data << "\n";
        std::cout << "\nhead: " << this->head->data;
        std::cout << "\ntail: " << this->tail->data << "\n";
    };

};