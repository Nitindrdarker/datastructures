#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *link;
};
class headed{
    public:
    int max;
    int min;
    node *link;
};
void insertfirst(headed *k)
{
    node *n=new node();
    n->data=0;
    n->link=k->link;
    k->link=n;
}
void display(headed *h)
{
   
    node *n=h->link;
    while(n!=NULL)
    {
        cout<<n->data;
        n=n->link;

    }
    
}

int main()
{
    int i=3;
    char lol;
    headed *head=new headed();
    node *second=new node();
    node *third =new node();
    node *forth=new node();
    node *first=new node();
    
    first->data=1;
    first->link=second;
    second->data=2;
    second->link=third;
    third->data=3;
    third->link=forth;
    forth->data=4;
    forth->link=NULL;
    head->link=first;
    head->max=forth->data;
    head->min=first->data;
    insertfirst(head);
    display(head);
    cout<<head->max;
    cout<<head->min;


    
}