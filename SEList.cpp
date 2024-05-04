#include <iostream>

class SEListNode{
public:
    SEListNode * next;
    SEListNode * prev;
    int nodeArray[4];
};


class SEList{
private:
    SEListNode *dummy;
    /*
    int _numberOfArrayElements(int array[]){
        int size = 0;
        while(array[size] != -1){
            size++;
        }
        return size;
    };
    
    */
    bool _searchInsideArray(int element,SEListNode *nodeAtual){
        for(int i=0; i<=_numberOfArrayElements(nodeAtual->nodeArray); i++){
            if(element ==  nodeAtual->nodeArray[i]){
                return true;
            }
        }
        return false;
    };

public:

    int _numberOfArrayElements(int array[]){
        int size = sizeof(&array);
        return (size/4);
        
    };

    SEList(){
        this->dummy->nodeArray[0] = 0;
        this->dummy->nodeArray[1] = 0;
        this->dummy->nodeArray[2] = 0;
        this->dummy->nodeArray[3] = 0;
        //this->dummy->nodeArray[4] = 0;
    };






};