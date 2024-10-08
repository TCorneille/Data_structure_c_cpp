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

/*void create(int A[],int n)
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
}*/
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
    //cout<<c<<endl;
    cout<<sum<<endl;
    cout<<max<<endl;
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
/*node* linear(node* p, int key)
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
    
}*/

void insert(struct node *p,int index,int x)
{
    
    if (index <0||index>count(first))
    return;
    
    node *t=new node;
    t->data=x;
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

int main()
{
    int n=6;
    //int A[]={3,5,6,7,8,9};
  
 // create(A,n);
    insert(first,0,10);
    insert(first,0,2);
    insert(first,2,5);
  
  display(first);

  /*node* result = linear(first, 54);
    
    if (result != nullptr) {
        cout << "Node with key " << 54 << " found with data: " << result->data<< endl;
    } else {
        cout << "Node with key " << 54 << " not found." << endl;
    }*/

    return 0;
}