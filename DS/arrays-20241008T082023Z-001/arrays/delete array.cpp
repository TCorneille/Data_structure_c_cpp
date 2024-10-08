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
   int arr[n]={12,3,4,6,42,5,1,4,3,5};
for(i=3;i<n-1;i++)
{
    //arr[i]=arr[i-1];
    arr[i]=arr[i+1];

}
n--;
for(i=0;i<n;i++)
{
cout<< arr[i]<<" ";
}
return 0;
}
