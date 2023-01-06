//====================================================================================================================
// Name        :  DSA Assignment no :- 4
// Author      :  Ronak Sandeep Dagale
// Description :  Write a C++ program to implement the following data structures and its operations using linked list:
//                i) Stack ii) Queue.
// Concept     :  Stack & Queue
//======================================================================================================================
#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};
class stac
{
  node *top=NULL;
  public:
  void push(int);
  void pop();
  void peek();
  void display();
};
class queue
{
  node *front=NULL;
  node *rear=NULL;

  public:
  void enqueue(int);
  void dequeue();
  void peek();
  void display();
};
int main() {
  stac s;
    queue q;
  int ch,x,c;
  do{
  
  cout<<"\n 1. Stack \n 2. Queue \n 3. Exit\n";
    cout<<"Enter your Choice :- "<<endl;
  cin>>c;
    switch(c)
      {
    case 1:
  cout<<"\n\n\t\t****** Welcome to Stack Program ******\n\n";
  do
  {
    cout<<"\n 1. Push Element to Stack\n 2. Pop element from Stack\n 3. Top element of stack\n 4. Display Stack\n 5. Exit"<<endl;
    cout<<"Enter your Choice :- "<<endl;
    cin>>ch;
    switch(ch)
      {
        case 1:
        cout<<"Enter element to Push it into Stack :- "<<endl;
        cin>>x;
        s.push(x);
        cout<<"\tElement inserted Succesfully"<<endl;
        break;

        case 2:
        s.pop();
        break;

        case 3:
        s.peek();
        break;

        case 4:
          cout<<"Stack Elements are :- "<<endl;
        s.display();
        break;

        case 5:
        cout<<"\t Thank You for using stack "<<endl;
        break;

        default:
        cout<<"Sorry Invalid Choice"<<endl;
      }
  }while(ch!=5);
    break;

        case 2:
     cout<<"\n\n\t\t****** Welcome to Queue Program ******\n\n";
  do
  {
    cout<<"\n 1. Insert Element into Queue\n 2. Delete element from Queue\n 3. Top element of Queue\n 4. Display Queue\n 5. Exit"<<endl;
    cout<<"Enter your Choice :- "<<endl;
    cin>>ch;
    switch(ch)
      {
        case 1:
        cout<<"Enter element to Push it into Queue :- "<<endl;
        cin>>x;
        q.enqueue(x);
        cout<<"\tElement inserted Succesfully"<<endl;
        break;

        case 2:
        q.dequeue();
        break;

        case 3:
        q.peek();
        break;

        case 4:
          cout<<"Queue Elements are :- "<<endl;
        q.display();
        break;

        case 5:
        cout<<"\t Thank You for using queue"<<endl;
        break;

        default:
        cout<<"Sorry Invalid Choice"<<endl;
      }
  }while(ch!=5);
   break;   

        case 3:
        cout<<"Thank you "<<endl;
        break;
   }
}while(c!=3);
    }
void stac::push(int x)
{
  node *newnode=new node();
   newnode->data=x;
   newnode->next=NULL;
  if(top==NULL)
  {
    top=newnode;
  }
  else
   {
     newnode->next=top;
     top=newnode;
   }
}
void stac::pop()
{
  node *temp;
  temp=top;
  if(top==NULL)
    cout<<"Stack is empty (underflow condition) "<<endl;
  else
  {
  cout<<"Pop element is "<<temp->data<<endl;
    top=top->next;
    delete(temp);
  }
}
void stac::peek()
{
  if(top==NULL)
    cout<<"Stack is empty (underflow condition) "<<endl;
  else
  {
    cout<<"Top element of Stack is :- "<<top->data<<endl;
  }
}
void stac::display()
{
  node *temp;
  temp=top;
  if(top==NULL)
    cout<<"Stack is empty (underflow condition) "<<endl;
  else
  {
    while(temp!=NULL)
      {
        cout<<temp->data<<endl;
        temp=temp->next;
      }
  }
}
void queue::enqueue(int x)
{
  node *newnode=new node();
   newnode->data=x;
   newnode->next=NULL;
  if(front==NULL && rear==NULL)
  {
    front=rear=newnode;
  }
  else
   {
     rear->next=newnode;
      rear=newnode;
   }
}
void queue::dequeue()
{
  node *temp;
  temp=front;
  if(front==NULL && rear==NULL)
    cout<<"Queue is empty (underflow condition) "<<endl;
  else
  {
  cout<<"Dequeue element is "<<temp->data<<endl;
    front=front->next;
    delete(temp);
  }
}
void queue::peek()
{
  if(front==NULL && rear==NULL)
    cout<<"Queue is empty (underflow condition) "<<endl;
  else
  {
    cout<<"Top element of Queue is :- "<<front->data<<endl;
  }
}
void queue::display()
{
  node *temp;
  temp=front;
  if(front==NULL && rear==NULL)
    cout<<"Queue is empty (underflow condition) "<<endl;
  else
  {
    while(temp!=NULL)
      {
        cout<<temp->data<<endl;
        temp=temp->next;
      }
  }
}
