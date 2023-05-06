#include "ArrayQueue.h"

#include <iostream>
using namespace std;

class LinkedQueue : public ArrayQueue
{
    LinkedQueue *HEAD, *TAIL;
    LinkedQueue *next;
    int data;

public:
    LinkedQueue()
    {
        HEAD = nullptr;
        TAIL = nullptr;
    };
    ~LinkedQueue(){};
    LinkedQueue(int a) : data(a), next(nullptr) {}
    LinkedQueue(int a, LinkedQueue *next)
    {
        data = a;
        this->next = next;
    }

    //bool IsFull(); list is never full
    bool IsEmpty();
    void enqueue(int data);
    void dequeue();
    void front();
    void rear();
    void display();
};