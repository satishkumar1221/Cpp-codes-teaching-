#include <cstdlib>
#include <iostream>
using namespace std;

int binary_search(int array[],int first,int last, int value);

int main() {

int list[10];

 for (int k=0; k<11; k++)
 list[k]=2*k+1;

 cout<< "binary search results: "<< binary_search(list,1,21,11)<<endl;

 return 0;
}//end of main
int binary_search(int array[],int first,int last, int search_key)
{
 int index;

 if (first > last)
 index = -1;

 else
 {
 int mid = (first + last)/2;

 if (search_key == array[mid])
 index = mid;
 else

 if (search_key < array[mid])
 index = binary_search(array,first, mid-1, search_key);
 else
 index = binary_search(array, mid+1, last, search_key);

 } // end if
 return index;
 }// 
