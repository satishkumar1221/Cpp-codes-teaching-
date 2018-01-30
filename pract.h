#include<iostream>
#include<string>
using namespace std;
// all the variales and structurs are declared in the header file//
int x,y;
struct student
{
  string name;
  int rollnumber;
};
typedef struct student stu;
//function defanitions
void print(stu *s1); 
