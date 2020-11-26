#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *link;

};
void appends(node *h)
{int l;
    cin>>l;
    node *n=new node();
    n->data=l;
    n->link=h;
    node *t=h;
    
    do{
        h=h->link;
    }while(h->link!=t);
    h->link=n;
}
void tranverse(node *d)
{
    node *temp_head=d;
    
    do{
        cout<<temp_head->data<<" ";
        temp_head=temp_head->link;
    }while(d!=temp_head);
}

int main()
{
    int k=5;
    node *head=new node();
    node *temp=new node();
    head->link=head;
    temp=head;
    while(k--)
    appends(temp);
    tranverse(head);
    
    return 0;
    
}