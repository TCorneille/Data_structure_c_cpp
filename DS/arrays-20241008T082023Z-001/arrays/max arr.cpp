/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int max(int arr[],int n)
{
    int i;
    int b=1;
    for(i=0;i<n;i++)
    {
        if (arr[i]>=b)
      {
       b=arr[i];   
      }
    }
   return b; 
}
int main()
{
    int r[4],n;
    r[0]=4;
     r[1]=5;
      r[2]=1;
       r[3]=9;
    cout<<max(r,4);

    return 0;
}
