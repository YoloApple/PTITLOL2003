#include<bits/stdc++.h>
using namespace std;
int n,k,a[1005];
//void next(string s) //Xau Nhi Phan Ke Tiep
//{
//	int i=s.length()-1;
//	while(i>=0  && s[i]=='1')
//	{
//		s[i]='0';
//		--i;
//	}
//	if(i != -1 )
//	{
//		s[i]='1';
//	}
//	cout<<s<<endl;
//}
//void next()								//Tap con ke tiep
//{
//	int i=k;
//	while(i>=0 && a[i]==n-k+i)
//	{
//		--i;
//	}
//	if(i==0)
//	{
//		for(int i=1;i<=k;i++)
//		{
//			cout<<i<<" ";
//		}
//	}
//	else
//	{
//		a[i]++;
//		for(int j=i+1;j<=k;j++)
//		{
//			a[j]=a[j-1]+1;
//		}
//		for(int i=1;i<=k;i++)
//		{
//			cout<<a[i]<<" ";
//		}
//	}
//}										//Tap con ke tiep

void next()
{
	int i=n-1;
	while(i>=0 && a[i]>a[i+1])
	{
		--i;
	}
	if(i==0)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<i<<" ";
		}
	}
	else
	{
		int j=n;
		while(a[i]>a[j])
		{
			--j;
		}
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<" "; 
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
//		string s;      //Xau Nhi Phan Ke Tiep
//		cin>>s;		   
//		next(s);		
//		cin>>n>>k;						//Tap con ke tiep
//		for(int i=1;i<=k;i++)
//		{
//			cin>>a[i];
//		}
//		next();
//		cout<<endl;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		next();
		cout<<endl;
	}
	return 0;
}
