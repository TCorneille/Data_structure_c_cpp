/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void maxmin(int arr[],int n)
{
    int i;
    int b=arr[0];
    int c=arr[0];
    for(i=1;i<n;i++)
    {
        if (arr[i]<b)
      {
         b=arr[i];
      }
      else if (arr[i]>=c)
     {
         c=arr[i];
     }
    
 cout<<"min"<<b<<endl; 
cout<<"max"<<c<<endl;
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
  maxmin(arr,n);
        

    return 0;
}