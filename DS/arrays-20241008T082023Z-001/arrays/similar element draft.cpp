/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void sim(int r[])
{
    int count=0;
    for (int i=0;i<10;i++)
    {
    for (int j = i + 1; j < 10; j++)
    {
       if ( r[i]==r[j])
        {
           
            cout<<r[i];
        }
    
        
    }
    
}

}
int main()
{
   int r[10]={3,5,7,8,3,7,4,7,3,4};
sim(r);
    return 0;
}
