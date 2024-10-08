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
    int B[4]={3,5,8,10};
    int C[8];
    int i=0,j=0,k=0;
       while (i < 4 && j < 4)
    {
        if (A[i] < B[j])
        {
          i++;
        }
        else if (A[i] > B[j])
        {
           j++;
        }
        else if(A[i] == B[j])// element is common, add once
        {
            C[k++] = A[i++];
            j++; // Increment both i and j to skip duplicates
        }
    }
  

     /*while (i < 4)
    {
        C[k++] = A[i++];
    }

    while (j < 4)
    {
        C[k++] = B[j++];
    })*/
   

 for (int l = 0; l < k; l++)
    {
        cout << C[l] << " ";
    }

    return 0;
}

