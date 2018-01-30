#include<iostream>
//#include<memory>
#include <stdio.h>
using namespace std;
#define sum(x,y) x+y // macro .///
// pre processor dericvative///

// () IS CALED PARAMETERS//
//add is the name of the functiuon//
// int is the return datatype.//
// pass by value //
//int add(int x, int y)
// 5 SECTIONS OF MEMORY//
   /*1 TEXT SEGMENT // IF ELSE STATEMENTS GET EXECUTED HERE//
     2 DATA SEGMENT // GLOBAL VARIABLES ARE EXECUTED HERE//
     3 UN INTILIZED DATA SEGMENT
     4 STACK SEGMENT  // FUNCTIONS GET EXECUTED HERE//
     5 HEAP SEGEMTN // YOU NEED POINTERS TO ACCESS THIS SECTYION OF MEMORY//*/
inline int add(int x, int y)
{
  // z is l;ocal to the function add//
   int z1 =x+y;
   return z1;
}
// Macro rreduces the ioverhead of calling a function //
// PASS BY ADDRESS//


int sub(const int &x, const int &y)
{
   int z =x-y;
  x=z;
   return z;
}
int main()
{


  int x,y,z,p;
  std::cout<<"hello world"<<std::endl;
  //cout is like printf statement is cpp//
  //printf("%d",x);
  cout<<"enter the required option and 2 numbers"<<endl;
  cin>>x>>z>>y;
  //cout<<z1;

  switch(x)
  {
    // case/// it will sear ch for the givern i/p in a case//
// ADD IS A FUNCTION..//
    case 1 : p = add(z,y);
             cout<<"add is"<<p;
             cout<<"z is"<<z;
             break;

    case 2 :  p =  sub(z,y);
             cout<<"sub is"<<p;
             cout<<"z is"<<z;
             break;
   case 3 : cout<<sum(2,3)<<endl;
            break;
    default: cout<< "not a valid option";
  }
  return 0;
}
