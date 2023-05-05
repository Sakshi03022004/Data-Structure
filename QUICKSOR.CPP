//quick sort
#include<iostream.h>
#include<conio.h>
class quick
{
  int a[50],n,l,u,v,temp,j,i;
  public:void read();
  void display();
  void quick_sort(int[],int,int);
  int partition(int[],int,int);
};
void quick::read()
{
  cout<<"enter the no of elements"<<endl;
  cin>>n;
  cout<<"enter the array elements"<<endl;
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
  }
}
void quick::quick_sort(int a[],int l,int u)
{
  if(l<u)
  {
  j=partition(a,l,u);
  quick_sort(a,l,j-1);
  quick_sort(a,j+1,u);
  }
}
int quick::partition(int a[],int l,int u)
{
  v=a[l];
  i=l;
  j=u+1;
  do
  {
  i++;
  }
  while(a[i]<v && i<=u);
  do
  {
  j--;
  }
  while(v<a[j]);
  if(i<j)
  {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  }
  while(i<j);
  a[l]=a[j];
  a[j]=v;
  return(j);
  }
void quick::display()
{
  quick_sort(a,0,n-1);
  cout<<"array after sorting"<<endl;
  for(int i=0;i<n;i++)
  {
  cout<<a[i]<<endl;
  }
}
void main()
{
clrscr();
quick q1;
q1.read();
q1.display();
getch();
}