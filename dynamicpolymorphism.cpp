#include<iostream>
#include "stdio.h"
#include<string>
using namespace std;

class Animal
{
public:
  int legs;
  string blood;
  string popcolour;
  //conmstructors are very imp for object oriented programming// 
 Animal()
 {
   cout<<"this is a class for the encyclopedia"<<endl;
 }
  // dynamic polymorphism a.k.a. function overriding //
  virtual void leg(int legs)=0;
  virtual void  bloods(string colour)=0;
  virtual void  poopcolour(string colour)=0;
};

class dog: public Animal
{
public:
/*  Dog()
  {
    cout<<"you have succesfully entrd the dog class"<<endl;
  }*/

    void leg(int legs)
    {
      this->legs = legs;

    }
    void bloods(string colour)
    {
      this->blood = colour;
    }
    void poopcolour(string colour)

    {
      this->popcolour = colour;
    }
};
class cat : public Animal
{
  /*cat()
  {
    cout<<"you have succesfully entrd the cat class"<<endl;
  }*/
public:

    void leg(int legs)

    {
      this->legs = legs;

    }
    void bloods(string colour)
    {
      this->blood = colour;
    }
    void poopcolour(string colour)
    {
      this->`popcolour` = colour;
    }
};
void automate(Animal *ani,string chop, string pop )
{
ani->leg(4);
ani->bloods(chop);
ani->poopcolour(pop);
delete(ani);
}
// u need to use a pointer//

int main()
{
int ca;
cout<<"enter the case "<<endl;
cin>>ca;
switch(ca)
{
  case 1 : // Animal *ani = new Animal;
            cout<<"enter blood and pop colour"<<endl;
            //string x,y;
            //cin>>x>>y;
          //  automate(ani,"red","yellow");
            break;
  case 2 :  Animal *ani1;
            ani1 = new dog();
            cout<<"enter blood and pop colour"<<endl;
            //string x,y
            //cin>>x>>y;
            automate(ani1,"red","black");
            break;
  case 3 :  Animal *ani2;
            ani2 = new cat();
           cout<<"enter blood and pop colour"<<endl;
           //string x,y
            automate(ani2,"red","brown");
            break;
}

//Animal *ani = new Dog;

}
