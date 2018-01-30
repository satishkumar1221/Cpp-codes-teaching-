#include<iostream>
#include<string>
//vectors, maps .lists, list comprehension, multimaps//
using namespace std;
namespace staticpolymorphism
{
  class polystaic
  {
  public:
    int x;
    int y;
    int z;
    void add(int x , int y, int z);
    void add(int z,int y);
    void add(double z,double y);
    polystaic();
  };
}
namespace dynamicpolymorphism
{

  class god
  {
  public:
    // god knows mom and dad
    virtual void add(int x,int y,int z)=0;
    god();
  };
  class mom:public god
  {
  public:
    int x;
    int y;
    int z;
    void add(int x , int y, int z);
  };
  class dad:public god
  {
    int x;
    int y;
    int z;
    void add(int x , int y, int z);
  };
// dynamic polymorphisn is also called run time polymorphism//

}
