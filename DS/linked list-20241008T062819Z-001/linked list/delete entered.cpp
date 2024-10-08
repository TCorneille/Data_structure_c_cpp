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
void reverse(struct node *p,int n)
{
    //node *t =p;
    int i=0;
    int *A;
    A=new int[n];
    
        while (p)
        {
           A[i] =p->data;
            p=p->next;
            i++;
            
        }
        p=first;
        i--;
        while (p)
        
        {
            p->data=A[i--];
            p=p->next;
            
        }
        delete []A;
    
}
void deleteit(struct node *p,int index,int n)
{
    if (index<0||index>n)
    {
    cout<<"the entered index is not in range,therefore nothing to delete the list remains ";
    return;
    }
    node *t=NULL;
    if(index==0)
    {
        t=first;
        first=first->next;
        delete t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t=p->next;
        p->next=t->next;
        delete t;
        
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
      
        //n++;
        
    }
    insert(first,0,1);
    display(first,n);
    int index;
    cout<<"enter index to delete ";
    cin>>index;
   deleteit(first,index,n);
    //reverse(first,n);
    //cout<<" The list in reverse are : " <<endl;
    cout<<"Data, after deletion of x node :  "<<endl;
     display(first,n);
    
   //int A[]={10,20,30,40,50};
  // create(A,n);
 
   //insert(first,1,10);
   //display(first);
    return 0;
}


