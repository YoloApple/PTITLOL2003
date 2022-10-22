#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,s;
        cin>>n>>m>>s;
        int a=7*n;
        if(a<m*s)
        {
            cout<<"-1"<<endl;
        }
        else{

            float c=(float)(m*s)/(float)n;
            int x=c;
            double tmp=c*100;
            int s=tmp;
            if(s>100)
            {
                x=x+1;
            }
            cout<<x<<endl;
        }
    }
    return 0;
}


#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, s, m; cin >> n >> s >> m;
		if (s * m > (s - s / 7) * n)cout << -1;
		else {
			for (int i = 1; i <= s - s / 7; i++) {
				if (s * m <= n * i) {
					cout << i;
					break;
				}
			}
		}
		cout << endl;
	}
}
