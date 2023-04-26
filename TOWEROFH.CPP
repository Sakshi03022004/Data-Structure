#include<iostream.h>
#include<conio.h>
class demo
{
 int n;
 public: void tower(int,char,char,char);
	 void get();
};
void demo::get()
{
  cout<<"enter the number of disk:"<<endl;
  cin>>n;
  tower(n,'A','B','c');
}
void demo::tower(int n,char from,char to,char aux)
{
  if(n!=0)
  {
  tower(n-1,from,aux,to);
  cout<<"move disk"<<n<<"from"<<from<<"to"<<to<<endl;
  tower(n-1,aux,to,from);
  }
}
void main()
{
clrscr();
demo d;
d.get();
getch();
}