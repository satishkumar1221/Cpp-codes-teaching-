#include<iostream>
#include<memory>
#include<string>
using namespace std;
class point
{
public:
  int m;
point()
{
//  this->x1 =0;
  //0000000000000000this->y1 =0;
  cout<<"welcome to sample code"<<endl;
}
int computeslope(int x1 , int x2 ,int y1, int y2 )
{
    m = ((y2-y1)/(x2-x1));
    return m;
}

};


int automate(point *p, int x1, int x2, int y1, int y2)
{
  int p1;
  p1 =  p->computeslope(x1,x2,y1,y2);
  cout<<"slope is"<<p1;
}
int main()
{
  // using new operator to assign memory in heap section //
  int x1 =10,y1 =20 , x2=5,y2 =5;
  point *p = new point();
   automate(p,x1,x2,y1,y2);
}
