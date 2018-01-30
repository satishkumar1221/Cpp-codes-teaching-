#include<iostream>
#include<memory>
using namespace std;

void findsecondlargest(int arr[],int s)
{
  int first = -9;
  int second =-9;

  for(int i =0;i<7;i++)
  {
    if(arr[i]>first)
    {
      second = first;
      first = arr[i];

    }
    else if(arr[i]>second && arr[i]!=first)
    {
      second =arr[i];
    }
  }
  cout<<"second larges number is "<<second;
}
int main()
{
  int arr[7] ={4,8,4,5,63,76,89};
  int s=0;
//  int s;
  //s = (sizeof(arr/sizeof(*arr)));
  findsecondlargest(arr,s);
}
