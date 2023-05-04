//linklist
#include<iostream.h>
#include<conio.h>
class node
{
public:int data;
	node*next;
	node()
	{
	data=0;
	next=NULL;
	}
	node(int data)
	{
	this->data=data;
	this->next=NULL;
	}
};
class linklist
{
    public:node*head;
	   linklist()
	   {
	    head=NULL;
	   }
	   void insertnode(int data);
	   void printlist();
	   void deletenode(int nodeoffset);
};
void linklist::insertnode(int data)
{
      node*newnode=new node(data);
      if(head==NULL)
      {
	head=newnode;
	return;
      }
      node * temp=head;
      if(temp->next!=NULL)
      {
	temp=temp->next;
      }
      temp->next=newnode;
}
void linklist::printlist()
{
      node * temp=head;
      if(head==NULL)
      {
	cout<<"list is empty"<<endl;
	return;
      }
      while(temp!=NULL)
      {
	cout<<temp->data<<"->";
	temp=temp->next;
      }
}
void linklist::deletenode(int nodeoffset)
{
      node*temp1=head,*temp2=NULL;
      int listlen=0;
      if(head==NULL)
      {
	cout<<"list is empty"<<endl;
	return;
      }
      while(temp1!=NULL)
      {
	temp1=temp1->next;
	listlen++;
      }
      if(listlen<nodeoffset)
      {
	cout<<"index out of range"<<endl;
	return;
      }
       temp1=head;
      if(nodeoffset==1)
      {
	head=head->next;
	delete temp1;
	return;
      }
      while(nodeoffset-->1)
      {
       temp2=temp1;
       temp1=temp1->next;
      }
       temp2->next=temp1->next;
       delete temp1;
}
void main()
{
  clrscr();
  int d;
  linklist l1;
  l1.insertnode(1);
  l1.insertnode(2);
  l1.insertnode(3);

  cout<<endl<<"print list"<<endl;
  l1.printlist();
  cout<<endl<<"delete the node"<<endl;
  cin>>d;
  l1.deletenode(d);
  cout<<"elements are"<<endl;
  l1.printlist();
  cout<<endl;
  getch();
}