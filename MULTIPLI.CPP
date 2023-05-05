//multiplication of matrix
#include<iostream.h>
#include<conio.h>
class demo
{
  int a[10][10],b[10][10],m[10][10],c,r,i,j,no;
  public:void get();
	 void read();
	 void show();

};
void demo::get()
{
 cout<<"enter the no of row"<<endl;
 cin>>r;
 cout<<"enter the no of column"<<endl;
 cin>>c;
 cout<<"enter the matrix a"<<endl;
}
void demo::read()
{
  for( i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
     cin>>a[i][j];
    }
   }
   cout<<"enter the second matrix"<<endl;
   for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
     {
      cin>>b[i][j];
     }
   }
}
void demo::show()
{
 cout<<"multiplication of matrix"<<endl;
   for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
	m[i][j]=0;
	for(int k=0;k<c;k++)
	{
	 m[i][j]+=a[i][j]*b[i][j];
	}
      }
    }
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
	cout<<m[i][j]<<"  ";
      }
      cout<<" "<<endl;
    }
}
void main()
{
  clrscr();
  demo d1;
  d1.get();
  d1.read();
  d1.show();
  getch();
}
