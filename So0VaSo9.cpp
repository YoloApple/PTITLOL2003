#include<bits/stdc++.h>
using namespace std;
bool check(string s,int n)
{
    int t=0;
    for(int i=0;i<s.size();i++)
    {
         t=t*10+s[i]-'0';

    }
    return t%n==0;
}
void solve(int n)
{
    string s="9";
    queue<string> q;
    q.push(s);
    while(!check(q.front(),n))
    {
    s=q.front(); q.pop();
    string s1=s+'0';
    string s2=s+'9';
    q.push(s1); q.push(s2);
    }
    cout<< q.front()<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}