#include<bits/stdc++.h>
using namespace std;
int test(string s)
{
	for(int i=0;i<s.length()-1;i++)
	{
		if(abs(s[i+1]-s[i])!=1)
			return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(test(s)==1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}
