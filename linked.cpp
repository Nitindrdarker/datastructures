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
void add_biggning(node **b)
{
    node *sum=new node();
    sum->data=12;
    sum->link=(*b);
    *b=sum;
    
}
void deletes(node *dele)
{
    node *dl=new node();
    while(dele!=NULL)
    {
        if(dele->link->data==10)
        {
            dl->data=dele->link->data;
            dl->link=dele->link;
            dele->link=dele->link->link;
            
            break;
        }
        
        
    }delete dl;

}
int main()
{
    int i=3;
    char lol;
    node *second=new node();
    node *head=new node();
    head->data=10;
    head->link=second;
    second->data=13;
    second->link=NULL;
    while(i--)
    adding(head);
    add_biggning(&head);
    deletes(head);
    display(head);
}