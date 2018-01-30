#include"polymorphism.h"
using namespace staticpolymorphism;
using namespace dynamicpolymorphism;
polystaic::polystaic()
{
  cout<<"static polymorphism or function overloading "<<endl;
  cout<<"same function name but differnet parameters"<<endl;
}
void polystaic:: add(int x,int y,int z)
{
  int sum;
  sum = x+y+z;
  cout<<"sum 3 digit is "<<sum<<endl;
}

void polystaic::add(int x,int y)
{
  int sum;
  sum = x+y;
  cout<<"sum 2 digit is"<<sum<<endl;
}
void polystaic::add(double x,double y)
{
  double sum;
  sum = x+y;
  cout<<"sum 2 digit is"<<sum<<endl;
}
void automate(polystaic *s1)
{
  s1->add(4,4,7);
  s1->add(4,5);
  s1->add(10.1,15.1);
}

dynamicpolymorphism::god::god()
{
  cout<<"Welcome to Dynamic Polymorphism"<<endl;
  cout<<"An Instance of God cannnot be created"<<endl;
  cout<<"Try creating it and compiler will pop up an error :p"<<endl;
}
void mom:: add(int x, int y,int z)
{
  int sum;
  sum = x+y+z;
  cout<<"sum of mom is "<<sum<<endl;
}
void dad::  add(int x, int y,int z)
{
  int sum;
  sum = x+y+z;
  cout<<"sum of dad is "<<sum<<endl;
}
int main()
{
cout<<"enter 1 for static poly and 2 for dynamic poly"<<endl;
int ca;
cin>>ca;
switch (ca)
{
case 1 :{
        polystaic *s1;
//allocate a memory to the pointer//
        s1 = new polystaic();
        automate(s1);
         }
        break;
// virtual or dynamic polymorphism//
case 2: {
        god *g1 = new mom();
        g1->add(4,5,7);
        }
        break;
        default:cout<<"read the options"<<endl;
}
}
