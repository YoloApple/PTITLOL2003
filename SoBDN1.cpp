#include<iostream>
#include<queue>
#include<string>
using namespace std;
int res=0;
void BDN(string n)
{
    queue<string> S;
    S.push("1");
    while(S.size())
    {
        string s=S.front();
        S.pop();
        if (s.size()<n.size()||s.size()==n.size()&&s<=n)res++;
        else return;
            S.push(s+"0");
            S.push(s+"1");
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        res=0;
        BDN(n);
        cout<<res<<endl;
    }
}