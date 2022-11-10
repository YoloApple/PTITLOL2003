//#include<bits/stdc++.h>//// YES OR YES CodeForce
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--)
//	{
//		string s;
//		cin>>s;
//		for (int i=0; i<=s.length(); i++)
//  		{
//      			s[i]=tolower(s[i]);
//  		}
//  		if(s=="yes")
//  		{
//  			cout<<"YES"<<endl;
//		}
//		else
//		{
//			cout<<"NO"<<endl;	
//		}
//	}
//	return 0;
//}
//#include<bits/stdc++.h>   /Technical Support Codeforce
//using namespace std;
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		string s;
//		int n=s.length();
//		cin>>n;
//		cin>>s;
//		int cnt=0,res=0;
//		for(int i=0;i<s.length();i++)
//		{
//			if(s[i]=='Q') cnt++;
//			else  cnt--;
//			if(cnt<=0)  cnt=0;
//		}
//		if(cnt==0)  cout<<"Yes"<<endl;
//		else cout<<"No"<<endl;
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n;
//		cin>>n;
//		if(n>=1900)
//		{
//			cout<<"Division 1"<<endl;
//		}
//		else if(n>=1600 && n<=1899)
//		{
//			cout<<"Division 2"<<endl;
//		}
//		else if(n>=1400 && n<=1599)
//		{
//			cout<<"Division 3"<<endl;
//		}
//		else
//		{
//			cout<<"Division 4"<<endl;
//		}
//	}
//	return 0;
//}
//#include<bits/stdc++.h>			///Watermelon  codeForce
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	if(n%2==0 && n>2)
//	{
//		cout<<"Yes"<<endl;
//	}
//	else
//	{
//		cout<<"No"<<endl;
//	}
//	return 0;
//}
//#include<bits/stdc++.h>       //Way too long words
//using namespace std;
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		string s;
//		cin>>s;
//		int n=s.length();
//		if(n<=10)
//		{
//			cout<<s<<endl;
//		}
//		else
//		{
//			cout<<s[0]<<n-2<<s[n-1]<<endl;
//		}
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int a[n][n];
//	int cnt=0;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cin>>a[i][j];
//		}
//	}
//	for(int i=0;i<n;i++)
//	{
//		if(a[i][0])
//		for(int j=0;j<n;j++)
//		{
//		}
//	}
//	cout<<cnt<<endl;
//}
//
//#include<bits/stdc++.h>     //Boy or girl
//using namespace std;
//int main()
//{
//	string s;
//	cin>>s;
//	int cnt=0;
//	set<char> st;
//	for(int i=0;i<s.length();i++)
//	{
//		st.insert(s[i]);
//	}
//	if(st.size()%2==0)
//	{
//		cout<<"CHAT WITH HER!"<<endl;
//	}
//	else
//	{
//		cout<<"IGNORE HIM!"<<endl;
//	}
//	return 0;
//}


//#include<bits/stdc++.h>    ///Next Round
//using namespace std;
//int main()
//{
//	int n,k;
//	cin>>n>>k;
//	int a[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	int cnt=0;
//	for(int i=0;i<n;i++)
//	{
//		
//		if(a[i]>=a[k-1])
//		{
//			if(a[i]!=0)
//			{
//				cnt++;
//			}
//		}
//	}
//	cout<<cnt<<endl;
//	return 0;
//}

//#include<bits/stdc++.h>           //Stone on the table CodeForce
//using namespace std;
//int main()
//{
//	string s;
//	int n=s.length();
//	cin>>n;
//	cin>>s;
//	int cnt=0;
//	for(int i=0;i<n;i++)
//	{
//		if(s[i]==s[i+1])
//		{
//			cnt++;
//		}
//	}
//	cout<<cnt<<endl;
//}

//#include<bits/stdc++.h>                  //Elephant CodeForce
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int c=n/5;
//	if(n%5>0)
//	{
//		c++;
//	}
//	cout<<c<<endl;
//}

//#include<bits/stdc++.h>							//Word CodeForce
//using namespace std;
//int main()
//{
//	string s;
//	cin>>s;
//	int cnt=0, res=0;
//	for(int i=0;i<s.length();i++)
//	{
//		if(s[i]>='A'&&s[i]<='Z')
//		{
//			cnt++;
//		}
//		else if(s[i]>='a'&&s[i]<='z')
//		{
//			res++;
//		}
//	}
//	if(cnt>res)
//	{
//		for(int i=0;i<s.length();i++)
//		{
//			s[i]=toupper(s[i]);
//		}
//	}
//	else
//	{
//		for(int i=0;i<s.length();i++)
//		{
//			s[i]=tolower(s[i]);
//		}
//	}
//	cout<<s<<endl;
//}


