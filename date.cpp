// Singleton class.,...////
//Example with date.///

#include<iostream>
//#include<conio>
#include<memory>

using namespace std;
class SystemDate
{
public:
  string date;
  string month;
  string year;
  static SystemDate *getSysDateInstance();
private:
  static SystemDate *Instance;
  SystemDate()
  {
    date = "01" ; ;
    month = "jan";
    year = "1970";
    //cout<<"Default date is "<<date<<month<<year<<endl;
    showDate();
  }
  ~SystemDate();
public:
  void setDate(const string s1,const string s2,const string  s3)
   {
     this->date= s1;
     this->month = s2;
     this->year =s3;

   }
   void showDate()
    {
        cout<<date<<","<<month<<","<<year<<endl;
    }
};
// create a new object in the singleton class//
// scope resolution//
SystemDate *SystemDate::Instance=NULL;
SystemDate *SystemDate ::getSysDateInstance()
{
  if (!Instance)   // Only allow one instance of class to be generated.
      Instance = new SystemDate;

   return Instance;

}
  int main(){
SystemDate *ref1 = SystemDate::getSysDateInstance();
ref1->showDate(); // 1-Jan-1970
ref1->setDate("19","Dec","2017");

SystemDate *ref2 = SystemDate::getSysDateInstance();
ref1->showDate();
return 0;
// 19-Dec-2017
}
