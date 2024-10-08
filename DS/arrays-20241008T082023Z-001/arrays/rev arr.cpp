/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void rev(int arr[],int n)
{
 int i;
 for (i=n-1;i>=0;i--)
 {
     cout<<arr[i]<<" ";
 }
}
int main()
{
   int n[5];
   n[0]=5;
   n[1]=4;
   n[2]=43;
   n[3]=42;
   n[4]=7;
   rev(n,5);

    return 0;
}
