#include<iostream>
#include "stdio.h"
#include<string>
#include<memory>
using namespace std;

//oops concepts//
// namespaces
namespace satish
{
/*  uint32_t portnumber(uint32_t free, uint32_t starspace)
  {
    // search fior empty space in the memory if you find one return some value //
  }*/
  // oops concepts//
  /* inheritance
    abstraction
     polymorphism
     encapsulation */
  struct student
  {
    int math;
    int rollnumber;
    int science;
    float avg;
    // c stype programming //
    // c++ style programming//

  };
  typedef student Student;

  void pop()
  {
    cout<<"pop this fart"<<endl;

  }
  void charmender()
  {
    cout<<"charmender is a fire pokemon"<<endl;
  }
  void adddata(Student s1,int rollnumber,int math,int eng)
  {
    s1.math = math;
    s1.rollnumber = rollnumber;
    s1.science = eng;
    cout<<math <<rollnumber <<eng;
  }
  void adddatapointer(Student *s1,int rollnumber,int math,int eng)
  {
    s1->math = math;
    s1->rollnumber = rollnumber;
    s1->science = eng;
    cout<<math <<rollnumber <<eng<<endl;
    delete(s1);

    // We allocated the meory and as soona s our job is done we have freed the memopry///
///memset(s1,0,4)

  }
//student *s1
}

namespace noobrajcppstyle
{
  class professor
  {
    /*
  public:
  protected:
  private:*/ // access specifers and breifly speraking this is abstraction //
  // encapsulation is colection of datatypes// struct is a encapsuled//
  // polymorphism one function many forms dynamic and static //
  //inheritance //  get the access to the parent class.. //
public:
  int rollnumber;
  int math;
  int sci;
  float  avg;
  string firstname;
  //constructor //
  //whenever an object is created in class a consstructor is a first function to be called//
  professor()
  {
    // initilize the valuers in the constructor//
    this->rollnumber =0;
    this->math=0;
    this->sci=0;
    this->firstname = "pop this array";
  //  cout<<rollnumber<<math<<sci<<firstname<<endl;
  }
  void entermarks(string name, int rollnumer, int sci, int math)
  {
    this->firstname = name;
    this->rollnumber = rollnumber;
    this->sci = sci;
    this-> math =math;
      cout<<rollnumber<<math<<sci<<firstname<<endl;
  }
public:
  void average()
  {
   avg = static_cast<float>((math+sci)/2.0);
    cout<<"average is "<<avg<<endl;
  }
  void changemarks()
  {
    this->math =100;
  }
private:
  bool qualityassistant;
};
//inheritance//

  class teachingassistant : public professor
  {
  //public:
  //  teachingassistant();
//   int math,sci,avg;
 //public:
  // teachingassistant();
  // {
     //math =100;
     //sci =90;
    // avg=0;
   //}
 //public:
   //average();
    // functions in professor can be accesed by teaching assistant also//
  };
}
void automate(noobrajcppstyle::professor *p1)
{
  //using namespace noobrajcppstyle;
//  p1->entermarks("raj", 45, 85,80);
  //p1->average();
}
int add(int p,int q,int r)
{
  int z;
  z= p+q+r;
  return(z);
}
 int  add(int p,int q)
{
  int z;
  z= p+q;
  return(z);
}

int main()
{
  using namespace satish;
  pop();
  charmender();
/*satish::  Student *s1 = new student();
satish::Student *s2 = new student();

 //s1 = (Student)malloc(sizeof(satish::struct student));
satish::adddatapointer(s1,9,100,90);
satish::adddatapointer(s2,90,80,90);
// satish::adddata(s1,1,100,90);
// noobraj starts here//*/
using namespace noobrajcppstyle;
//unique pointer//
noobrajcppstyle::professor *p1 = new professor;
noobrajcppstyle::professor *p2 = new professor;
//automate(p1);
//automate(p2);
teachingassistant t1;
t1.entermarks("raj",100 ,90, 80);
//t1.average();
//noobrajcppstyle::t1.math(100);
//noobrajcppstyle::t1.sci(90);
t1.average();
t1.qualityassistant(true);
std::cout<<"average of teaching assistant is "<<t1.avg;
int s,d;
s=add(1,2,3);
cout<<"add 3 elements "<<s;
d=add(1,2);
cout<<"add 2 elements"<<d;


/*std::unique_ptr<professor>(p1(new professor()));
std::unique_ptr<professor>(p1(new professor()));*/
  return 0;
}
