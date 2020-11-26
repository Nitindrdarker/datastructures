#include<iostream>
using namespace std;
class Stack{
    int top;
    public:
    int a[3];
    Stack(){top=-1;}
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    
};
bool Stack::push(int x)
{
    if(top>=3-1)
    {
        cout<<"overflow\n";
        return false;
    }
    else
    {
        a[++top]=x;
        return true;
    }
    
}
int Stack::pop(){
    if (top<0)
    {
        cout<<"underflow\n";
        return 0;
    }
    else
    {
        int l=a[top--];
        return l;
    }
    
}
int Stack::peek()
{
    if(top<0)
    {
        cout<<"underflow";
        return 0;
    }
    else
    {
        int l=a[top];
        return l;
    }
    
}
bool Stack::isEmpty()
{
    if (top<0)
    {
        cout<<"stack is empty";
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    Stack s;
    s.isEmpty();
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"\n"<<s.peek();
    cout<<"\n"<<s.pop();
    cout<<"\n"<<s.peek();
    cout<<"\n"<<s.pop();
    cout<<"\n"<<s.peek();
    cout<<"\n"<<s.pop()<<"\n";
    s.isEmpty();
    return 0;
    

}
