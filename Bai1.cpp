#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
long long lcm(ll int a, ll int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        ll c = gcd(a,b);
        ll d= lcm(a,b);
        cout<<c<<" "<<d;
        cout<<endl;
    }
    return 0;
}