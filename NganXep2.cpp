#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="PUSH")
        {
            int a;
            cin>>a;
            st.push(a);
        }
        if(s=="POP")
        {
            if(!st.empty())
            {
                st.pop();
            }
        }
        else if(s=="PRINT")
        {
            if(!st.empty())
            {
                cout<<st.top()<<endl;
            }
            else
            {
                cout<<"NONE"<<endl;
            }
        }
    }
    return 0;
}