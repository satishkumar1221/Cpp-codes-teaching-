#include"pract.h"

void print(struct student *s1)
{
  cout<<s1->name<<endl;
  cout<<s1->rollnumber<<endl;
}
int main()
{
struct student *s1;
s1 = new stu();
s1->name ="kiran";
s1->rollnumber = 40;
print(s1);
return 0;
}
