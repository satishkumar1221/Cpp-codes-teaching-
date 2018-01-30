/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<string>
#include<memory>
#include<map>
using namespace std; 

int main()
{
	std::cout<<"This is my first map program"<<std::endl; 
	map<int,string> x;
	map<int,string>::iterator itr;  
	//
		x.insert (pair<int,string>(1,"satish")); 
		x.insert (pair<int,string>(2,"aishu")); 
		x.insert (pair<int,string>(3,"priya")); 
		x.insert (pair<int,string>(4,"geetu")); 
		x.insert (pair<int,string>(5,"tanish")); 
		x.insert (pair<int,string>(6,"karthik")); 
		x.insert (pair<int,string>(6,"karthik")); 
		x.insert (pair<int,string>(7,"naaresh"));

		for(itr= x.begin();itr!=x.end();itr++)
		{
		    
			cout<<itr->first << itr->second<<std::endl; 
		}
		
		// using the find and erase function ]////// 
		//can give number or charecter ///
		// the key should be int an dvaluse shoud be int // d
		itr= x.find("tanish");
        if (itr !=x.end())
         x.erase (itr);
         
        // list o map after erase// 
        	for(itr= x.begin();itr!=x.end();itr++)
		{
		    
			cout<<"After erase" <<itr->first << itr->second<<std::endl; 
		}

return 0; 	    

}

