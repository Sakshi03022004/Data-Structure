//demonstate stack
#include<iostream.h>
#include<conio.h>
class stack
{
 int s[5],top,n;
 public : stack()
	 {
	 top=-1;
	 }
	 int isfull();
	 int isempty();
	 void push(int val);
	 void pop();
	 void display();
 };
 int stack::isfull()
 {
 return top==n-1;
 }
 int stack::isempty()
 {
 return top==-1;
 }
 void stack::push(int val)
      {
	if(isfull())
	{
	cout<<"stack overflow"<<endl;
	}
	else
	{
	 top++;
	 s[top]=val;
	 }
	}

	void stack::pop()
	{
	 if(isempty())
	 {
	 cout<<"stack underflow";
	 }
	 else
	 {
	 cout<<"the popped element is"<<s[top]<<endl;
	 top--;
	 }
	 }
	 void stack::display()
	 {
	 if(top>=0)
	 {
	 cout<<"stack element are";
	 for(int i=top;i>=0;i--)

	 cout<<s[i]<<"  ";
	 cout<<endl;
	 }
	 else
	 {
	 cout<<"stack is empty";
	 }
	 }

 void main()
     {
     clrscr();
     stack s1;
     int ch,val;
     cout<<"1)push in stack"<<endl;
     cout<<"2)pop from stack"<<endl;
     cout<<"3)display stack"<<endl;
     cout<<"4)exit"<<endl;
     do
     {
     cout<<"enter choice:="<<endl;
     cin>>ch;

     switch(ch)
     {
     case 1: cout<<"enter the value to be pushed:"<<endl;
	     cin>>val;
	     s1.push(val);
	     break;

     case 2:s1.pop();
	     break;

     case 3:
	     s1.display();
	     break;
     case 4:
	     cout<<"Exist"<<endl;
	     break;
     default:
	     cout<<"invalid choice"<<endl;

 }
 }
 while(ch !=4);
 getch();
}