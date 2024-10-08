/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   // int n;
    int arr[10]={2,1,5,6,3,7,2,6,9,7};

   int *p=new  int[10];
    
 for (int i=0;i<10;i++)
{
    p[i]=arr[i];
}
 
  for (int i=0;i<10;i++)
 {
 cout<< arr[i];
  }
  
  cout<<endl;
   for (int i=0;i<10;i++)
{
 cout<< p[i]<<" ";
}
cout<<endl;
int *q=new int[20];
 for (int i=0;i<10;i++)
{
    q[i]=p[i];
}
delete[]p;
p=q;
q=NULL;
for (int i=0;i<20;i++)
{
cout<<p[i];
}
cout<<endl;
     return 0;
}

