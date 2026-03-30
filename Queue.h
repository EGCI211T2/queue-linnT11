
#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;
#include "Node.h"



class Queue {
    NodePtr headPtr, tailPtr;
    int size;

public:
    void enqueue(int);
    int dequeue();
    Queue();
    ~Queue();
};

void Queue::enqueue(int x){
    NodePtr new_node = new NODE(x);

    if(size == 0){
        headPtr = tailPtr = new_node;
    }
    else{
        tailPtr->set_next(new_node);
        tailPtr = new_node;
    }

    size++;
}
int Queue::dequeue(){
    if(size > 0){

        NodePtr temp = headPtr;
        int value = temp->get_value();

        headPtr = headPtr->get_next();

        if(headPtr == NULL){
            tailPtr = NULL;
        }

        delete temp;
        size--;

        cout << "dequeing " << value << endl;
        return value;
    }

    cout << "Empty Queue" << endl;
    return -1;
}

Queue::Queue(){
    headPtr = tailPtr = NULL;
    size = 0;
}

Queue::~Queue(){
    if(size > 0){
        cout << "Clearing queue" << endl;
    }

    while(size > 0){
        dequeue();
    }
}

#endif