#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[10]={1000,500,200,100,50,20,10,5,2,1};
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        for(int i=0;i<10;i++)
        {
            while(n>=a[i])
            {
                cnt++;
                n-=a[i];
            }
        }
        cout<<cnt<<endl;
    }
}