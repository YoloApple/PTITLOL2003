#include<bits/stdc++.h>
using namespace std;

const int MOD= 1000000007;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long lt=1,res=0;
        for(int i=n-1;i>=0;i--)
        {
            res+=a[i]*lt;
            res%=MOD;
            lt*=x;
            lt%=MOD;
        }
        cout<<res<<endl;
    }
    return 0;
}