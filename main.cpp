#include<iostream>
#include "Queue.h"
#include"ArrayQueue.h"
#include"LinkedQueue.h"


using namespace std;
int main(){
 ArrayQueue queue(5);
 queue.enqueue(1);
 cout<<"1 added"<<endl;
 cout<<"queue : ";
 queue.display();
 cout<<"\n";
 queue.enqueue(2);
 cout<<"2 added"<<endl;
 queue.enqueue(3);
  cout<<"3 added"<<endl;
 queue.enqueue(4);
  cout<<"4 added"<<endl;
 queue.enqueue(5);
  cout<<"5 added"<<endl;
 queue.enqueue(6);
  //cout<<"6 added"<<endl;
 cout<<"queue : ";
 
 queue.display();
 cout<<endl;

 queue.dequeue();
 cout<<"element deleted"<<endl;
 
 cout<<endl;

 queue.front();
 cout<<endl;
 queue.rear();
cout<<"\n \n Using Linked lists: \n";

LinkedQueue list;

list.front();
list.enqueue(11);
cout<<"Element added in list \n";
list.enqueue(12);
cout<<"Element added in list \n";
 list.enqueue(13);
cout<<"Element added in list \n";
 list.enqueue(14);
cout<<"Element added in list \n";
list.enqueue(15);
cout<<"Element added in list \n";
list.enqueue(16);
list.display();

list.front();
list.rear();



}
