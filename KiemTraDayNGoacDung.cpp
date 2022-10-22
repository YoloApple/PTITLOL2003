/*#include<bits/stdc++.h>
using namespace std;
stack<int> st;
bool check(string s)
{
    while(!st.empty())
        st.pop();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{'||s[i]=='['||s[i]=='(')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            return false;
        
        if(s[i]=='{' && st.top()=='}')         st.pop();
        
        else if(s[i]=='[' && st.top()==']')    st.pop();

        else if(s[i]=='(' && st.top()==')')    st.pop();
            
            else return false;
        }
    }
    if(st.size()==0)    
            return true;

        return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(check(s))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
*/

#include <iostream>
#include <stack>
#include<string>
using namespace std;
string ktra(string s) {
	stack<char> X;
	for (auto x : s) {
		if (X.empty() || x == '(' || x == '[' || x == '{')X.push(x);
		else {
			if (x == ')') {
				if (X.top() == '('&&x==')')X.pop();
				else return "NO\n";
			}
			if (x == ']') {
				if (X.top() == '[')X.pop();
				else return "NO\n";
			}
			if (x == '}') {
				if (X.top() == '{')X.pop();
				else return "NO\n";
			}
		}
	}
	if (X.size())return "NO\n";
	return "YES\n";
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << ktra(s);
	}
}