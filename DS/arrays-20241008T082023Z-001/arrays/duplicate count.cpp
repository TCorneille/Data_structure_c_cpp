/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arr[10]={5,6,6,7,9,10,10,10,14,15};
    int a=0;

  
    for (int i=0;i<10;i++)
    {
        int count=1;
        
            
                while (i<10&& arr[i]==arr[i+1])
               {
                   i++;
                   count++;
               }
               if (count>1)
               cout<<arr[i]<<" appears "<<count<<" times"<<endl;
         
            
            
            
        }
    
    //cout<<d;

    return 0;
}
