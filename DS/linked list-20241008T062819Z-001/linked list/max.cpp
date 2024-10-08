/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct node 
{
    int data;
    struct node *next;
} *first;

void create(int A[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    int c=0;
    int sum=0;
    int max=0;
    while (p!=0)
    {
        cout<<p->data<<" ";
          sum=sum+p->data;
          if (p->data>max)
      {
          max=p->data;
      } 
      
        p=p->next;
        if(p)
        
        c++;
        
    }
    cout<<endl;
    cout<<c<<endl;
    cout<<sum<<endl;
    cout<<max;
}
    

int main()
{
    
    int A[]={3,5,6,7,7,9};
  
  create(A,6);
  display(first);

    return 0;
}
