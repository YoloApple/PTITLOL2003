#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main()
{
    int t;
    cin>>t;
    deque<int> q;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="PUSHFRONT")
        {
            int x;
            cin>>x;
            q.push_front(x);
        }
        if(s=="PRINTFRONT")
        {
            if(q.empty())  cout<<"NONE"<<endl;
            else cout<<q.front()<<endl;
        }
        if(s=="POPFRONT")
        {
            if(!q.empty())
            {
                q.pop_front();
            }
        }
        if(s=="PUSHBACK")
        {
            int n;
            cin>>n;
            q.push_back(n);
        }
        if(s=="PRINTBACK")
        {
            if(q.empty())  cout<<"NONE"<<endl;
            else cout<<q.back()<<endl;
        }
        if(s=="POPBACK")
        {
            if(!q.empty())
            {
                q.pop_back();
            }
        }
    }
    return 0;
}