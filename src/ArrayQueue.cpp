#include "ArrayQueue.h"
#include <iostream>
using namespace std;

ArrayQueue::ArrayQueue()
{
    FRONT = -1;
    REAR = -1;
};
ArrayQueue::ArrayQueue(int capacity)
{
    this->capacity = capacity;
    arr = new int[capacity]; // create a new aray of provided size using arr pointer
    FRONT = -1;
    REAR = -1;
    size = 0;

}

ArrayQueue::~ArrayQueue()
{
    delete arr;
};
bool ArrayQueue::IsEmpty()
{
    if (REAR == FRONT)
    {
        return true; /* code */
    }
    else
        return false;
}
bool ArrayQueue::IsFull()
{
    if (REAR == capacity-1)
    {
        return true; /* code */
    }
    else
        return false;
}

void ArrayQueue ::enqueue(int data)
{
    if(IsFull())
     {
        cout<<"Queue full...";

     } 
    if(!IsFull()){

        REAR++;
        arr[REAR]= data;
        size++;


    }
    

}

void ArrayQueue::dequeue(){
    if(IsEmpty()){
        cout<<"Queue Empty...";
    } 
    else{
        //delete arr[FRONT]; cant delete in array
        // FRONT = (FRONT+1)%capacity;
        FRONT = FRONT+1;
        //REAR = REAR--;
        
        //size--;
        if (IsEmpty()) {
            // If the queue becomes empty after dequeue, reset FRONT and REAR to their initial values.
            FRONT = 0;
            REAR = -1;
        }
    }
}


void ArrayQueue::front(){
cout<<"Front element : "<<arr[FRONT+1];
cout<<"   FRont value : "<<FRONT;


}
void ArrayQueue ::rear(){
    cout<<"Rear element: "<<arr[REAR];
    cout<<"  rear value : "<<REAR;
}

void ArrayQueue:: display(){

    for (size_t i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";  /* code */
    }
    
}


