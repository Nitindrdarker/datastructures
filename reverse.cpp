#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};


Node* revers(Node* h)
{
    Node *temp,*prev,*current;
    current=h;
    prev=NULL;
    while (current!=NULL)
    {
    temp=current->next;
    current->next=prev;
    prev=current;
    current=temp;

    }
    return prev;
    
}
void display(Node *s){
    while (s!=NULL)
    {
        cout<<s->data<<" ";
        s=s->next;
    }
    
}
int main()
{
    Node *head=new Node();
    Node *first=new Node();
    Node *second=new Node();
    Node *third=new Node();
    Node *fourth=new Node();
    

    head->data=1;
    head->next=first;
    first->data=2;
    first->next=second;
    second->data=3;
    second->next=third;
    third->data=4;
    third->next=fourth;
    fourth->data=5;
    fourth->next=NULL;
    display(head);
    head=revers(head);
    cout<<"\n";
    display(head);
    return 0;
}