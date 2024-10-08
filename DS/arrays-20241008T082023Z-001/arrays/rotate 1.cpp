/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i, n=10;
   int arr[n]={12,3,4,6,42,5,1,4,8,7};
   int temp=arr[0];
   for(i=0;i<n;i++)
   {
       
      arr[i] =arr[i+1];
       
      //cout<<arr[i]<<" "; 
       
   }
   arr[n-1]=temp;
 
    for(i=0;i<n;i++)
    {
     cout<<arr[i]<<" ";      
     }
    return 0;
}
