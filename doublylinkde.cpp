#include<iostream>
using namespace std;
class node{
    public:
    node *befor;
    int data;
    node *link;
};

node * adding(node *a)
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
    l->befor=a;
    a->link=l;
    return l;
}
void reverseshow(node* helo)
{
    while(helo!=NULL)
    {   
        cout<<helo->data<<" ";
        helo=helo->befor;
        
    }
}
int main()
{
    int i=4;
    char lol;
    node *second=new node();
    node *head=new node();
    head->befor=NULL;
    //head->data=10;
    head->link=second;
    second->data=12;
    second->link=NULL;
    node *tem=new node();
    tem=head;
    node *kkr;
    
    while(i--)
        kkr=adding(tem);
    reverseshow(kkr);
    
        
}