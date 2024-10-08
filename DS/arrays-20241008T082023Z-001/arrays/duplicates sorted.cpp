/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[10]={5,6,6,7,9,10,10,12,14,15};
  
    for (int i=0;i<10;i++)
    {
        if (arr[i]==arr[i+1])        {
            cout<<arr[i]<<" ";
            
        }
    }
    //cout<<d;

    return 0;
}
