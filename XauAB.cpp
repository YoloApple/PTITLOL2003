#include <bits/stdc++.h>
using namespace std;


#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)


int a[100],n,ok;
void init(){
	FOR(i,1,n+1) a[i]=0;
}

void next(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0){
		ok=false;
	}
	else a[i]=1;
}

int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		ok=true;
		while(ok){
			FOR(i,1,n+1){
				cout<<(a[i] ? 'B' : 'A');
			}
			cout<<" ";
			next();
		}
		cout<<"\n";
	}
}