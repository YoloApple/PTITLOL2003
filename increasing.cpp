#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a[n];
		int cnt=0;
		for(long long i=0;i<n;i++)  cin>>a[i];
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			if(a[i]<=a[i-1])
			{
				cnt++;
                break;
			}
		}
		if(cnt!=0)  cout<<"NO"<<endl;
		else  cout<<"YES"<<endl;
	}
	return 0;
}