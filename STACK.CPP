#include<iostream.h>
#include<conio.h>
class stack
{
 int s[5],top,n;
 public : stack()
	 {
	 top=-1;
	 n=5;
	 }
	 void push();
	 void pop();
	 void display();
 };
 void stack::push()
      {
	int val;

	if(top==n-1)
	{
	cout<<
	"overflow";
	}
	else
	{
	cout<<"Enter element to insert";
	cin>>val;
	top++;
	s[top]=val;
	}
      }
 void stack::pop()
      {
	int data;
	if(top==-1)
	{
	cout<<"underflow";
	}
	else
	{
	data=s[top];
	top--;
	cout<<"delete element is:="<<data<<endl;
	}
      }
 void main()
     {
     stack s1;
     int ch;
     clrscr();
     do
     {
     cout<<"enter choice:=";
     cin>>ch;

     switch(ch)
     {
     case 1:{
	     s1.push();
	     break;
	    }
     case 2:{
	     s1.pop();
	     break;
	    }
     case 3:{
	     cout<<"Exist";
	     break;
	    }
     }
 }
 while(ch!=3);
 getch();
}