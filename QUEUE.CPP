#include<iostream.h>
#include<conio.h>
class queue
{
  int q[5],n,front,rear;
  public : queue()
	  {
	  front=-1;
	  rear=-1;
	  }
	  void enqueue();
	  void dequeue();
	  void display();
};
  void queue::enqueue()
  {
   int val;
   if(rear==n-1)
   {
     cout<<"Queue overflow"<<endl;
   }
   else
   {
    if(front==-1)
    front=0;
    cout<<"insert element in queue"<<endl;
    cin>>val;
    rear++;
    q[rear]=val;
   }
  }
  void queue::dequeue()
  {
   if(front==-1||front>rear)
   {
    cout<<"Queue underflow"<<endl;
   }
   else
   {
    cout<<"Elemenr delete from queue is:"<<q[front]<<endl;
    front++;
   }
  }
  void queue::display()
  {
   if(front==1)
   {
    cout<<"front is empty"<<endl;
   }
   else
   {
    cout<<"queu elements are"<<endl;
    for(int i=front;i<=rear;i++)
    cout<<q[i]<<" ";
    cout<<endl;
   }
  }
 int main()
 {
 clrscr();
 queue q;
 int ch;
 cout<<"1)enqueue element in queue"<<endl;
 cout<<"2)dequeue element in queue"<<endl;
 cout<<"3)display all element in queue"<<endl;
 cout<<"exit"<<endl;
  do
   {
    cout<<"enter the choice"<<endl;
    cin>>ch;
     switch(ch)
    {
       case 1:q.enqueue();
	     break;
       case 2:q.dequeue();
	     break;
       case 3:q.display();
	     break;
       case 4:cout<<"exit choice"<<endl;
    }
   }
  while(ch!=4);
  return 0;
 }
