#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#define sum(x,y) x+y
//name space is used to organize the functions//
// some of fuctions of iostream requiore std namespace//
// A structire is the collection of the datatypes//
struct student
{
  string name;
  int rollnumber;
  int marks;
  //padding in structures.///
};
typedef struct student stu;
void automate(struct student *s1)
{
   s1->name = "satish";
   s1->marks = 89;
   s1->rollnumber =50;

}
void enterdetails(struct student &s1)
{
  s1.name = "kiran";
  s1.rollnumber=40;
  //cout<<s1.name<<endl;
  //cout<<s1.rollnumber<<endl;

//  printdetails(s1);
}

void printdetails(stu &s1)
{
   cout<<s1.name<<endl;
   cout<<s1.rollnumber<<endl;
}
/*void average
{

}*/
namespace kiran
{
  int x =100;
  int y=50;
  void print ()
  {
    cout<<x<<y<<endl;
  }
}

void printk(int x,int y)
{
  x=50;
  y=12;
//  z=100;
  cout<<"inside print k "<<x<<y<<endl;
}
int main()
{

  cout<<"hello word"<<endl;
  printf("this is my first program");
  cout<<"enter the req option from 1 to 6"<<endl;
  int p;
  cin>>p;

  switch(p)
  {

  //macros
  case 1 : cout<<"macros"<<endl;
          cout<<sum(3,4)<<endl;
          cout<<sum(4,3)<<endl;
          break;
  //pointers//
  //scope of a variable.///
  case 2:{
         cout<<"function pass by  value"<<endl;
         int x=20; int y=30;
         printk(x,y);
         cout<<"x and y inside main"<<x<<y;
         }
         break;
//pointers
case 3: {
        cout<<"introduction to pointers"<<endl;
        int y1 =1000;
        int *x1;
        x1=&y1;
        cout<<"y is"<<*x1<<endl ;
        *x1= 100;
        cout<<"y is after mode"<< y1;
      }
        break;
case 4: {
        cout<<"structures in C programming naive way"<<endl;
        stu kir;
        enterdetails(kir);
        printdetails(kir);
         }
        break;
case 5: {
        cout<<"structures in C programming using the pointers"<<endl;
        cout<<"will also use automate functions"<<endl;
        stu *s1;
        s1 = new stu();
         automate(s1);
         delete(s1);
         //unique pointers, shared pointers// 

        }
        break;
case 6: {
        cout<<"This will be end of tutorial 1"<<endl;
        cout<<"Thankyou for your patience"<<endl;
      }
        break;
case 7: cout<<"This is to introduce pass by refrence and pass by pointer"<<endl;
         break;
default: cout<<"fool read the comments"<<endl;
      }
//  kiran::print();
  return 0;
}
