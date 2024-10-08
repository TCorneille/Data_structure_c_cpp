/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void oddeven(int arr[],int n)
{
    int i;
    int even=0;
    int odd=0;
    int A[n];
    int B[n];
    for(i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            A[even]=arr[i];
        even++;
        }
       else 
       {
         B[odd]=arr[i];
       odd++;
          }
    }
  for(i=0;i<even;i++)
  {
      cout<<A[i]<<" ";
  }
  cout<<endl;
for(i=0;i<odd;i++)
  {
      cout<<B[i]<<" ";
  }
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
  oddeven(arr,n);
        

    return 0;
}