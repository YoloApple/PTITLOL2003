#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        ll a[100000];
        for(int i=0;i<n;i++)   cin>>a[i];
        sort(a,a+n);
        ll res=0;
        for(int i=0;i<n;i++)
        {
            res+=(lower_bound(a+i+1,a+n,a[i]+k)-a)-i-1;
        }
        cout << res << endl;
    }
    return 0;
}


///Cach Duyet Trau
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        int cnt=0;
        for(int i=0;i<n;i++)  cin>>a[i];
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(a[i]-a[j])<k)
                    {
                        cnt++;
                    }
            }
        }
        cout<<cnt<<endl;
    }
}*/