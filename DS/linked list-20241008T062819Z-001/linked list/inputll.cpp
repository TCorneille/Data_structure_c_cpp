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
}*first;
void create(int A[],int n)
{
    node *t,*last;
   first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for (int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct node *p,int n)
{
    int i=0;
    while(p)
    
        
        {
          cout<<"data "<<i+1<<" : "<<p->data<< endl;  
          p=p->next;
          i++;
        }
        
        
    
}
void insert(struct node *p,int index,int x)
{
    node *t=new node;
    t->data=x;
    if (index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for (int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        
        t->next=p->next;
        p->next=t;
    }
   
}
int main()
{
    
    int n;
    cout<<"Input the number of nodes : "<<endl;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"Input data for node "<<i+1<<" : "<<endl;
        int x;
          cin>>x;
        insert(first,i,x);
      
        
        
    }
    display(first,n);
   //int A[]={10,20,30,40,50};
  // create(A,n);
 
   //insert(first,1,10);
   //display(first);
    return 0;
}

