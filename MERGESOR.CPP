//merge sort
#include<iostream.h>
#include<conio.h>
class mergesort
{
  int a[30],n,i;
  public:void read();
	 void merge_sort(int a[],int i,int j);
	 void merge(int a[],int i1,int j1,int i2,int j2);
	 void display();
};
void mergesort::read()
{
  cout<<"enter num of elements"<<endl;
  cin>>n;
  cout<<"enter elements"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
}
void mergesort::merge_sort(int a[],int i,int j)
{
  int mid;
  if(i<j)
  {
    mid=(i+j)/2;
    merge_sort(a,i,mid);
    merge_sort(a,mid+1,j);
    merge(a,i,mid,mid+1,j);
  }
}
void mergesort::merge(int a[],int i1,int j1,int i2,int j2)
{
   int temp[50];
   int i,j,k;
   i=i1;
   j=i2;
   k=0;
   while(i<=j1 && j<=j2)
   {
     if(a[i]<a[j])
     temp[k++]=a[i++];
     else
     temp[k++]=a[j++];
   }
   while(i<=j1)
   temp[k++]=a[i++];

   while(j<=j2)
   temp[k++]=a[j++];

   for(i=i1,j=0;i<=j2;i++,j++)
   a[i]=temp[j];
}
void mergesort::display()
{
  merge_sort(a,0,n-1);
  cout<<"the sorted array is"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<endl;
  }
}
void main()
{
  clrscr();
  mergesort m1;
  m1.read();
  m1.display();
  getch();
}