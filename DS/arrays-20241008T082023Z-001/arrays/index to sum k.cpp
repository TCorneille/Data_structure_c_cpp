/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arr[10]={5,6,2,5,9,12,10,7,4,32};
    int a=0;

  
    for (int i=0;i<9;i++)
    {
        
       for(int j=i+1;j<10;j++)
        {
            
            
                if  ( (arr[i]+arr[j])==10)
               { 
                   
         
                 cout<<i<<" " <<j<<endl;
      
               }
             
          
        
          
             
    }
    }
    //cout<<d;

    return 0;
}