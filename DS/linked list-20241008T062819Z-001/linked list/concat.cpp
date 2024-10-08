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
} *first,*second;

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
    void create2(int A[],int n)
{
    struct node *t,*last;
    second=new node;
    second->data=A[0];
    second->next=NULL;
    last=second;
    
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}
int count (struct node *p)
{
    int count=0;
    while(p!=0)
    {
        p=p->next;
        count++;
    }
    return count;
    
}
void display(struct node *p)
{
   // int c=0;
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
       // if(p)
        
        //c++;
        
    }
    cout<<endl;
    cout<<count(first)<<endl;
    cout<<sum<<endl;
    cout<<max<<endl;
}

node* linear(node* p, int key)
{
    node *q;
    while (p!=0)
    {
        if (key==p->data)
        {
        q->next=p->next;
 p->next=first;
 first=p;
 return p;
        
    }
    q=p;
    p=p->next;
    }
    return 0;
    
}

void insert(struct node *p,int index,int x)
{
    
    if (index <0||index>count(first))
    return;
    
    node *t=new node;
    t->data=10;
    if (index==0)
    {
    t->next=first;
    first=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
            t->next=p->next;
            p->next=t;
    }
}
    
void deleteit(struct node *p, int index)
{
    if (index < 0 || index >= count(first))
        return;

    node *t = NULL;
    if (index == 0)
    {
        t = first;
        first = first->next;
        delete t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = p->next;
        p->next = t->next;
        delete t;
    }
}
void sorted(struct node *p)
{
    int x=-34253;
    while(p)
    {
    if(p->data<x)
    {
    cout<<"non sorted"<<endl;
    return;
    }
    else
    {
        x=p->data;
        
    }
        
        p=p->next;
       
    }
     cout<<"sorted"<<endl;
    
}
void reverse(struct node *p)
{
    //node *t =p;
    int i=0;
    int *A;
    A=new int[count (first)];
    
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

void concat(struct node *p,struct node *q)
{
    while (p->next!=NULL)
    {
    p=p->next;
    }
    p->next=q;
     while ( q!= NULL)
     {
         q=q->next;
     }
    
}


int main()
{
    int n=6;
    int A[]={3,5,6,7,8,9};
    int B[]={2,4,7,9,7,8};
  
  create(A,n);
  
    insert(first,6,10);
    deleteit(first,0);
    display(first);
    
  
  
  sorted(first);
  reverse(first);
   display(first);
 create2(B,n);
 display(second);
 concat(first,second);
 display(first);
 

  /*node* result = linear(first, 54);
    
    if (result != nullptr) {
        cout << "Node with key " << 54 << " found with data: " << result->data<< endl;
    } else {
        cout << "Node with key " << 54 << " not found." << endl;
    }

    return 0;
}*/
return 0;
}