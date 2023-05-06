#include "../include/LinkedQueue.h"
#include <iostream>
using namespace std;
  

  bool LinkedQueue::IsEmpty()
{
     if (HEAD == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void LinkedQueue::enqueue(int data){
    LinkedQueue *newNode = new LinkedQueue(data);
    if (HEAD == nullptr) { // empty list
        HEAD = TAIL = newNode;
    }
    else {
        TAIL->next = newNode;
        TAIL = newNode;
    }
}

void LinkedQueue::dequeue()
{
    if (IsEmpty())
    {
        cout << "Queue empty..." << endl;
        return;
    }

    LinkedQueue *p = HEAD;
    

    while (p->next != TAIL)
    {
        p = p->next;
    }

    delete TAIL;
    TAIL = p;
    TAIL->next = nullptr;
}

    
    

void LinkedQueue::front(){
    if (HEAD == nullptr)
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Front element: " << HEAD->data << endl;
}

void LinkedQueue:: rear(){
    cout<<"Rear Value :(data at tail) "<<TAIL->data;
}
void LinkedQueue::display(){
    LinkedQueue *temp = HEAD;
    while (temp!= nullptr)
    {
         cout<<temp->data<<"  ";
         temp = temp->next;  /* code */
    }
    cout<<endl;

}