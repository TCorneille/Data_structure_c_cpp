/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int A[4]={2,5,6,8};
    int B[4]={7,3,9};
    int C[7];
    int i=0,j=0,k=0;
   /*while(i<4&&j<4)
        {
        if (A[i]<B[j])
        C[k++]=A[i++];
        else
        C[k++]=B[j++];
        
    }*/
     while (i < 4)
    {
        C[k++] = A[i++];
    }

    while (j < 3)
    {
        C[k++] = B[j++];
    }
 for (int l = 0; l < k; l++)
    {
        cout << C[l] << " ";
    }

    return 0;
}
