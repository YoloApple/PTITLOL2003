#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long res=0;
        for(int i=0;i<n;i++)
        {
            res += i*a[i];
            res %= 1000000007;
        }
        cout<<res<<endl;
    }
}