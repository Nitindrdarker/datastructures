#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void display(node *h)
{
    while (h!=NULL)
    {
       cout<<h->data<<endl;
       h=h->next;

    }
    
}
 void bubbleSort(node *h)
{
    node *ptr,*ptr1=NULL;
    int s;

    do
    {
        s=0;
        ptr=h;
         while(ptr->next!=ptr1)
        {
            if(ptr->data>ptr->next->data)
            {
                int temp;
                temp=ptr->data;
                ptr->data=ptr->next->data;
                ptr->next->data=temp;
                s=1;
            }
            ptr=ptr->next;
        }
        ptr1=ptr;
    } while (s!=0);
    
    
    }
    
  
int main()
{
    node *head=new node();
    node *first=new node();
    node *second=new node();
    node *third=new node();
    node *forth=new node();
    head->data=5;
    head->next=first;
    first->data=4;
    first->next=second;
    second->data=3;
    second->next=third;
    third->data=2;
    third->next=forth;
    forth->data=1;
    forth->next=NULL;
    display(head);
  bubbleSort(head);
  cout<<"after sort"<<endl;
    display(head);
    return 0;
}