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
    int M[n];
    for(int i=0;i<n;i++)
    {
        cin>>M[i];
    }
    sort(M,M+n);
    long long a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) a=a*10+M[i];
        else b=b*10+M[i];
    }
    cout<<(long long)(a+b)<<endl;
    }
    return 0;
}