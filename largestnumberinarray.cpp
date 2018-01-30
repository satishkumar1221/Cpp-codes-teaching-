#include<iostream>
#include<memory>
#include<algorithm>
using namespace std;
int main()
{
  int x,max =-3252;
  // some value////
  // dynamic memory allocation in the heap section of the memory//
  //arr =(int *) malloc(10*sizeof(int));
  //test array //
  //vectors can make life easier/ // // / // / //
  int arr[10] = {4,6,1,3,5,8,9,10,25,30};
 cout<<"enter the required option to carry out operation"<<endl;
 cin>>x;
 switch(x)
 {
   case 1 : cout<<"using the sort"<<endl;
            sort(arr,arr+8) ;
            cout<<"largest element is"<<arr[9];
            break;
  case 2 :  cout<<"naive approach"<<endl;
             for(int i=0;i<10;i++)
              {
                if(arr[i]>max)
                {
                  max =arr[i];
                }
                }
                cout<<"largest element is "<<max;

              }
//return 0;

return 0;
}
