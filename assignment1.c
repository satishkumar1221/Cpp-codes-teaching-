ANs1). #include <stdio.h>
#include<conio.h>
#include<string.h>

#include <stdio.h>
//#include<conio.h>
#include<string.h>

void print(char *s1[100] ,float sum,char *s2[100],char *c )
{
	printf("%s %1f %s %c",s1,sum,s2,c);
}

void mysum(char s1[100], float x1, float x2, float x3, float x4, float x5, float x6, float x7, float x8, float x9, float x10, float x11, float x12, char s2[100], char c )
{
	float sum = 0 ;
	sum = (x1+x2+x3+x4+x5+x6+x7+x8+x9+x10+x11+x12); 
	print(s1,sum,s2,c); 
}

int main()
{
	mysum("The sum of all the real nos. is = %lf\n", 2.3,6.8, 777.0, 345.6,45.89, 3.990, 78.4,1.1,1.4,4.0,0.9895, 0,"Hello", 'C' );
	return 0; 
}
//--------------------------------------------------------------------------------------------------------------///----------------------------------------------------------------------------------///









Q2). int main()
{
	char a[]="Hello ";
	char b[]="Here ";
	int index=-1;
		
		_strlen("The sample string");

		strev(a);
		
		strcat(   strrev(a), b);
		
		charAtStr(a, 'l', &index); //return the index of string having l 
								// first index in case of multiple occurance		
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------///////////////////////
//------------------------------------------------------------------------------------------------////////////////////////////////////////////////////////----------------------/////////////

Ans2).
 
 #include <stdio.h>
//#include<conio.h>
//#include<string.h>

#include <stdlib.h>
//#include<conio.h>
//#include<string.h>

int main()
{
	char a[] = "hello"; 
	char b[] = "Here"; 
	// finding of size of a string// 
	int x,y; 
    x= sizeof(a)/sizeof(char); 
    y= sizeof(b)/sizeof(char);
    int z = x+y,count = 0; 
    char *con = (char*)malloc(z); 
    char *rev = (char*)malloc(x);  
   // printf("%d %d",x,y);
    // program to reverse a string // 
    for(int i=x; i>=0;i--)
    {
        rev[x-i] =a[i];
        //printf("%c",a[i]); 
       // printf("%d",i); 

    }

    //concatinating a string/// // / /
    for(int i=1; i<=x;i++)
    {
        printf("%c ",rev[i]); 

    }
    
    for(int i = 0 ; i<=z;i++)
    {
        if(i<=x)
        {
            con[i] = rev[i];
        }
        
        else if(i>x)  
        {
            con[i] = b[count];
            count++;
        }
            
            //count++; 
    }
    //print the concatinated string// 
    for(int i = 0 ; i<z;i++)
    {
        printf("%c\n",con[i]); 
    }
    free(con); 
    free(rev); 
    // find the first index in the l///
    for(int i=0;i<x;i++)
    {
    	if(a[i]=='l')
    	{
    		printf("the index of L is %d",i); 
    		break; 
    	}
    }
   return(0);
  }
    // now concatinate 2 strings// 
    
    ///also going to write a code using recursion //    
////////////////////////////////////////////////////////////////////////////////---------------------------------------------------////////////////////////////////------------/////
Q3). 
