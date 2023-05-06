#ifndef Queue_h
#define Queue_h
//#include<stdio.h>

class Queue{
    public:

   
   virtual  void enqueue(int data)= 0;
   virtual void dequeue()= 0;
   virtual bool IsEmpty()= 0;
   virtual bool IsFull()=0;
   virtual void front()=0;
   virtual void rear()=0;
   virtual void display()=0;





};


#endif
