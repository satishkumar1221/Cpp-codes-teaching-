#include "oops_real.h"

// constructor is nothing but the first thing that is executed after an object is created//
professor::professor()
{
  cout<<"Hi this is professor class"<<endl;
}
void professor::enterstudentdetails(string name, int studentmarks, int rollnumber)
{
  this->studentname = name;
  this->rollnumber= rollnumber;
  this->studentmarks= studentmarks;
}

void professor:: printmarks()
{
  cout<<studentname<<" "<<rollnumber<<" "<<studentmarks<<endl;
}
//parametrized constructor
teachingassistant::teachingassistant(int pop,int pull)
{
  this->pop =pop;
  this->pull =pull;
}
void teachingassistant::tempfunc()
{
    cout<<this->pop<<" "<<this->pull;
}
/*void teachingassistant::enterstudentdetails(string name, int studentmarks, int rollnumber)
{
  this->studentname = name;
  this->rollnumber= rollnumber;
  this->studentmarks= studentmarks;
}

void teachingassistant:: printmarks()
{
  cout<<studentname<<" "<<rollnumber<<" "<<studentmarks<<endl;
}*/

void automateprof(professor *p1)
{
  cout<<"professor automation"<<endl;
  string name;
  int studentmarks,rollnumber;
  cout<<"enter student name and roll number"<<endl;
  cin>>name;
  cin>>studentmarks;
  cin>>rollnumber;
  //example of inheritance//
  p1->enterstudentdetails(name,studentmarks,rollnumber);
  p1->printmarks();
}

void automateta(teachingassistant *ta)
{
  ta->tempfunc();
  ta->enterstudentdetails("sam houston",90,3);
  ta->printmarks();
}
int main()
{

int cas;
cout<<"enter 1 for prof 2 for TA 3 for student"<<endl;
cin>>cas;
// using new u are accessing heap section of memory//Dynamic memory allocation//
switch (cas)
{
case 1:cout<<"welocme professor"<<endl;
       professor *p1;
       p1 = new professor();
       automateprof(p1);
       break;
case 2: cout<<"welcome Teaching Assistant"<<endl;
        teachingassistant *t1;
        t1 = new teachingassistant(90,80);
        automateta(t1);
        break;
case 3: cout<<"welcome Students"<<endl;
                student *s1;
                s1 = new student();
                break;
default: cout<<"not a valid option"<<endl;


}
return 0;
}
