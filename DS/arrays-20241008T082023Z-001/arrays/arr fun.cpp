/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int sum(int r[4])
{
    int i;
    int sum=0;
    for(i=0;i<4;i++)
    {
        sum=sum+r[i];
    }
    return sum;
}

int main()
{
int r[4]={2,5,3,6};
cout<<sum(r);

    return 0;
}
