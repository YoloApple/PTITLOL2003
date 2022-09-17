//LuyThua
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll Pow(ll n, ll k) {
	if (k == 1)return n;
	ll tmp = Pow(n, k / 2);
	if (k & 1)return tmp % mod * tmp % mod * n % mod;
	else return tmp % mod * tmp % mod;
}

int main() {
	int t;
    cin>>t;
	while(t--) {
		ll n, k; cin >> n >> k;
		cout << Pow(n, k) << endl;;
	}
}

