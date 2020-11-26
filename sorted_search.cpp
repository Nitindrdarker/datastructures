#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *link;
};
void display(node *h)
{
    while(h!=NULL)
    {   
        cout<<h->data<<" ";
        h=h->link;
    }
}
void search(node *e,int i)
{   int p=0;
    while(e->data<=i)
    {
        p++;
        if(e->data==i)
        {
            cout<<"\nfound on "<<p<<" position";
            break;
        }
        e=e->link;
    }
}
void adding(node *a)
{
    int d ;
    cin>>d;
    node *l=new node();
    l->data=d;
    l->link=NULL;
    while(a->link!=NULL)
{
    a=a->link;
}
a->link=l;
}
int main()
{
    int i=3;
    char lol;
  
    node *head=new node();
    
    node *tem=new node();
    tem=head;
    while(i--) 
    adding(tem);
    
    display(head);
    int k;
    cin>>k;
    search(head,k);
   
}