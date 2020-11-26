#include<iostream>
#include<stack>
using namespace std;

bool if_integer(char a)
{
    if(isdigit(a))
        return true;
    
    else 
        return false;
}
int evaluExpre(string a)
{
    stack<int> s;
    for(int i=0;i<(int)a.length();i++)
    {
        if (if_integer(a[i]))
        {
            int d=a[i]-48;
            s.push(d);
        }
        else if (a[i]==' ')
        {
            continue;
        }
        else if (a[i]=='*')
        {
            int l,m;
            l=(int)s.top();
            s.pop();
            m=s.top();
            s.pop();
            int res=l*m;
            s.push(res);
        }
        else if (a[i]=='-')
        {
            int l,m;
            l=(int)s.top();
            s.pop();
            m=s.top();
            s.pop();
            int res=l-m;
            s.push(res);
        }
        else if (a[i]=='+')
        {
            int l,m;
            l=(int)s.top();
            s.pop();
            m=s.top();
            s.pop();
            int res=l+m;
            s.push(res);
        }
        else if (a[i]=='/')
        {
            int l,m;
            l=(int)s.top();
            s.pop();
            m=s.top();
            s.pop();
            int res=m/l;
            s.push(res);
            
        }
    }
    return s.top();
}

int main()
{
    string a;
    getline(cin,a);
    cout<<evaluExpre(a);
    return 0;
}
