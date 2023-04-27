#include<iostream.h>
#include<conio.h>
class demo
{
 int a[5][5],b[5][5],m[5][5],i,j,r,c,k;
 public: void get();
	 void add();
	 void sub();
	 void mul();
};
void demo::get()
{
cout<<"enter the no of row"<<endl;
cin>>r;
cout<<"enter the no of column"<<endl;
cin>>c;
cout<<"enter the matrix A"<<endl;
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
    cin>>a[i][j];
  }
}
cout<<"enter the matrix b:"<<endl;
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
  cin>>b[i][j];
  }
}
}
void demo::add()
{
cout<<"addition of matrix is:"<<endl;
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
  m[i][j]=a[i][j]+b[i][j];
  cout<<m[i][j];
  }
  cout<<" "<<endl;
}
}
  void demo::sub()
{
cout<<"substarction of matrix is:"<<endl;
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
  m[i][j]=a[i][j]-b[i][j];
  cout<<m[i][j];
  }
  cout<<" "<<endl;
}
}
 void demo::mul()
{
cout<<"multiplication of matrix is:"<<endl;
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
  m[i][j]=0;
  for(k=0;k<c;k++)
  {
  m[i][j]+=a[i][j]*b[i][j];

  }
}
}
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
  cout<<m[i][j];
  }
  cout<<" "<<endl;
  }
}
void main()
{
 clrscr();
 demo d;
 d.get();
 d.add();
 d.sub();
 d.mul();
 getch();
}


