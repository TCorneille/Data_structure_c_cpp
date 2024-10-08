/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void asc(int arr[],int n)
{
    int i;
    int b;
    for(i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
        {
            if (arr[i]<arr[j])
            {
                b=arr[i];
               arr[i]=arr[j];
                arr[j]=b;
               
            }
            
        }
     
   //return b; 
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
         asc(arr, n);

    cout << "Sorted Array (Ascending Order): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
        

    return 0;
}
