#include<iostream>
#include<algorithm>
#include<numeric>
#include<math.h>
#define ll long long

using namespace std;
ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a, ll b)
{
    return a/gcd(a,b)*b;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
	long long a,b;
	cin>>a>>b;
	cout<<lcm(a,b)<<" "<<gcd(a,b)<<endl;
    }
    return 0;
}