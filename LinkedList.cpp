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


    bool _deleteTail(){
        delete(this->tail);
        return true;
    }
    
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

    //consertarei esse metodo futuramente 
    void popInPosition(int position){
        LLNode *current = this->head;
        int posAtual = 0;
        while(posAtual < position-1){
            current = current->next;
            posAtual++;
            if(current->next == this->tail){
                break;
            }
        }
        if(current->next == this->tail){
            LLNode * nextNode = this->tail;
            this->tail = current;
            delete(nextNode);
        }


        //std::cout << current->data << "\n";
        LLNode * prevNode = current;
        LLNode * nextNode = current->next->next;
        current = current->next;
        delete(current);
        prevNode->next = nextNode;

    }


    void pop(){
        LLNode *current = this->head;
        while(current->next != this->tail){
            current = current->next;
        }
        this->_deleteTail();
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