#include<iostream>
#include<memory>
using namespace std;
struct Node
{
  struct Node *next;
  int data;
};
typedef struct Node node;

struct linkedlist
{
   struct Node *head;
};
typedef struct linkedlist linked;

struct Node * createnewnode(int z)
{
 struct Node *new1 = new struct Node();
 new1->data = z;
 return(new1);

}
/*linked * empty()
{
  // initilized the values//
linked *list = new linked();
list->head = NULL;
return(list);
}*/

void addnode(linked *p1,int y)
{
  node *current = NULL;
  if(p1->head ==NULL)
   {
     struct Node *p = createnewnode(y);
     p->next = p1->head;
     p1->head = p;
     //p1->head = createnewnode(y);
     //p1->head->next =NULL;
   }
  else
   {
     current = p1->head;
     while(current->next!=NULL)
     {
       current = current->next;
       //cout<<current->data;
     }
     current->next = createnewnode(y);
     //p1->head = current;
   }

}

void printlinkedlist(linked *p1)
{
  Node *current = p1->head;
  while(current->next!=NULL)
  {
    cout<<current->data<<endl;
    current = current->next;
  }
/*  while(p1->head->next!=NULL)
  {
    cout<<p1->head->data<<endl;
    p1 = p1->head->next;
  }*/
}

/*void insertattail(linked *p1,int num)
{
  Node *current =p1->head;
  while(current->next!= NULL)
  {
    current = current->next;
  }
  current->next = addnode(p1,num);
}*/

void deletenode(linked *p1, int num)
{
  cout<<"enter the data to be deleted"<<endl;
  node *current = p1->head;
  node *prev = current;
  while(current!=NULL)
  {
    //node *prev = current;
    if(current->data == num)
    {
        prev->next = current->next;
    }
    if(current == p1->head)
       p1->head = current->next;
       delete(current);
       return;
  }
     prev = current;
    current = current->next;
}


int main()
{
  cout<<"linked list program"<<endl;
linked *p1 = new linked();
p1->head =NULL;
addnode(p1,10);
addnode(p1,20);
addnode(p1,30);
addnode(p1,40);
addnode(p1,50);
addnode(p1,100);
deletenode(p1,30);
printlinkedlist(p1);
  return 0;
}
