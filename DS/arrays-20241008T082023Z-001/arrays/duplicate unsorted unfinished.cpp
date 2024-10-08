/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[10]={5,6,5,7,9,12,10,6,14,6};
    int a=0;

  
    for (int i=0;i<9;i++)
    {
        int count =1;
        if (arr[i]!=0)
       for(int j=i+1;j<10;j++)
        {
            
            
                if   (arr[i]==arr[j])
               { 
                   
         
                   count++;
      
               }
             
          
        }
          if (count>1)
              cout<<arr[i]<<" appears " <<count<<" times "<<endl;
    }
    //cout<<d;

    return 0;
}