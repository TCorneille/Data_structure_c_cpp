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
    int b=arr[0];
    for(i=0;i<n;i++)
    {
        if (arr[i]<=b)
      {
       b=arr[i];   
      }
    }
   return b; 
}

int main()
{
    int n,arr[100] ;
   
     cout<<"enter n";
         cin>>n;
    for (int i=0;i<n;i++)
    {
         cout<<"enter element "<< i+1<<" : ";
         cin>>arr[i];
         
        
    }
        for (int i=0;i<n;i++)
        {
    cout<<arr[i]<<" ";
        }
        cout <<endl;
       cout<<max(arr,3);
        

    return 0;
}
