#include "Queue.h"
#ifndef ArrayQueue_h
#define ArrayQueue_h

class ArrayQueue : public Queue{


    public:
    int size;
    int capacity;
    int *arr;
    int FRONT;
    int REAR;
    ArrayQueue();
    ArrayQueue(int size);
    ~ArrayQueue();
    
    void enqueue(int data);
   void dequeue();
   bool IsEmpty();
   bool IsFull();
   void front();
   void rear();
   void display();

};
#endif