/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    
   int i=9, n=10;
   int arr[n]={1,3,4,5,6,7,8,12,42,50};
   int x=10;
while (arr[i]>x)
{
    arr[i+1]=arr[i];
   i--;
}
 arr[i+1]=x;
n++;
for(i=0;i<n;i++)
{

 cout<< arr[i]<<" ";
}
return 0;
}