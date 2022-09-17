#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool a[1000001]={false};
        int l= INT_MAX;
        int r= INT_MIN;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            l=min(l,x);
            r=max(r,x);
            a[x]=1;
        }
        int cnt=0;
        for(int i=l;i<=r;i++)
        {
            if(a[i]==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}