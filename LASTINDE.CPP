//insert element in last index of array
#include<iostream.h>
#include<conio.h>
class demo
{
  int arr[6],i,element;
  public: void get();
	  void show();
};
 void demo::get()
 {
    cout<<"enter the  5 elements"<<endl;
    for(i=0;i<5;i++)
    {
      cin>>arr[i];
    }
 }
 void demo::show()
 {
    cout<<"enter the element to insert "<<endl;
    cin>>element;
    arr[i]=element;
    cout<<"the new array is:"<<endl;
    for(i=0;i<6;i++)
     {
      cout<<arr[i]<<"  ";
     }
  }
  void main()
  {
     clrscr();
     demo d;
     d.get();
     d.show();
     getch();
  }