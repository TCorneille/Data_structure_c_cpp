/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[8]={5,6,7,9,10,12,14,15};
    int d=arr[0]-0;
    for (int i=0;i<8;i++)
    {
        if (arr[i]-i!=d)        {
            cout<<i+d<<" ";
            d++;
        }
    }
    //cout<<d;

    return 0;
}
