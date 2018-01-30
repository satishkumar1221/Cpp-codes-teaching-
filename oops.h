#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class professor
{
  //variable declaration//
public:
  string profname;
  string degree;
protected:
   string studentname;
   int studentmarks;
   int rollnumber;
private:
    bool taccess;
  /// function declaration//
public:
  void enterprofdetails(string name , string degree);
protected:
  void enterstudentdetails(string name; int studentmarks,int rollnumber);
public:
  void printmarks();

};
// inheritance
class teachingassistant: protected professor
{
  // ALl the variables and functions in professor can be accessed by teaching assistant//
};
class student: public professor
{

};
