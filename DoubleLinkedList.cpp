#include <iostream>
#include <cstdio>

class DLLNode{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int value){
        this->data = value;
    }
};

class DoubleLinkedList{
private:
    DLLNode *dummy;

public:
    DoubleLinkedList(){
        this->dummy = new DLLNode(0);
    };

    void push(int value){
        DLLNode *newNode = new DLLNode(value);
        if(this->dummy->next == nullptr){
            this->dummy->next = newNode;
            this->dummy->prev = newNode;
            std::cout << "so é pra acontecer 1 vez\n";
        }
        DLLNode *prevLast = this->dummy->prev;
        this->dummy->prev = newNode;
        newNode->next = this->dummy;
        prevLast->next = newNode;
        newNode->prev = prevLast;

    };

    void get(int position){
        DLLNode * current = this->dummy;
        for(int i=0; i<=position; i++){
            current = current->next;
        };
        if(current == this->dummy){
            std::cout << "dummy node has no value\n";
        }
        else{
            std::cout << current->data << "\n";
        }
    }

    void pushToPosition(int value, int position){
        DLLNode *newNode = new DLLNode(value);
        if(this->dummy->next == nullptr){
            this->dummy->next = newNode;
            this->dummy->prev = newNode;
            std::cout << "so é pra acontecer 1 vez\n";
        }
        DLLNode *positionNode = this->dummy;
        for (int i=0; i<=position; i++){
            positionNode = positionNode->next;
        }
        DLLNode* positionNodePrev = positionNode->prev;
        newNode->next = positionNode;
        positionNode->prev = newNode;
        positionNodePrev->next = newNode;
        newNode->prev = positionNodePrev;
    };

    // eu poderia simplesmente trocar o valor do data mas eu quero trocar os nodes msm 
    void changeInPosition(int value, int position){
        DLLNode *newNode = new DLLNode(value);
        DLLNode *positionNode = this->dummy;
        for (int i=0; i<=position; i++){
            positionNode = positionNode->next;
        };
        DLLNode *positionNext = positionNode->next;
        DLLNode *positionPrev = positionNode->prev;
        delete(positionNode);
        newNode->next = positionNext;
        newNode->prev = positionPrev;
        positionNext->prev = newNode;
        positionPrev->next = newNode;

    };

    void _deletingNode(DLLNode *current){
        DLLNode *prevNode = current->prev;
        DLLNode *nextNode = current->next;
        delete(current);
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }
    bool deleteNode(int position){
        position++;
        if(position <= 0){
            std::cout << "essa é a posição do dummy e ele não pode ser excluido então o próximo depois do dummy será o excluido";
            _deletingNode(this->dummy->next);
            return true;
        }    
        DLLNode *current = this->dummy;
        int start = 0;
        while(start != position){
            current = current->next;
            start++;
        }
        _deletingNode(current);
        return true;

    };

    void show(){
        DLLNode *current = this->dummy->next;
        while(current != this->dummy){
            std::cout << current->data << "\n";
            current = current->next;
        };
    };

    void show1(){
        std::cout << this->dummy->prev->next->data << "\n";
        std::cout << this->dummy->next->next->next->data << "\n";
        std::cout << this->dummy->next->next->data << "\n";
        std::cout << this->dummy->next->data << "\n";
        std::cout << this->dummy->data << "\n";
    };



};