//write a program to demonstrate adjancy matrix representation of graph
#include<iostream.h>
#include<conio.h>
class demo
{
  int vert_arr[20][20];
  public:void display_matrix(int v);
	 void add_edge(int u,int v);
};
void demo::display_matrix(int v)
{

  for(int i=0;i<v;i++)
  {
    for(int j=0;j<v;j++)
    {
    cout<<vert_arr[i][j]<<"  ";
    }
    cout<<endl;
  }
}
void demo::add_edge(int u,int v)
{
  vert_arr[u][v]=1;
  vert_arr[u][v]=1;
}
void main()
{
  int v=6;
  clrscr();
  demo d;
  d.add_edge(0,4);
  d.add_edge(0,3);
  d.add_edge(1,2);
  d.add_edge(1,4);
  d.add_edge(1,5);
  d.add_edge(2,3);
  d.add_edge(2,5);
  d.display_matrix(v);
  getch();
}