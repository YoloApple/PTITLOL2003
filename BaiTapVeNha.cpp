
//  MANG DOI XUNG
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[0]==a[n-1])
        {
            cnt++;
        }
    }
    if(cnt!=0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
*/



// CHIA HET CHO 2
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            int m=i;
            if(m%2==0)
            {
                cnt++;
            }
        }
    }
        cout<<cnt<<endl;
    }   
}
*/

// BAT DAU VA KET THUC
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
            if(s[0]==s[s.length()-1])
            {
                cout<<"YES"<<endl;
            }
        else{
            cout<<"NO"<<endl;
        }
    }
}
*/

//PHEP CONG
/*
#include<bits/stdc++.h>
#include<string>
using namespace std;
int check(int a,int b, int c)
{
    if(a+b==c){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string s;
    getline(cin,s);
            int a = s[0]-'0';
            int b = s[4]-'0';
            int c = s[8]-'0';
    if(check(a,b,c))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
*/

// CHUAN HOA 1
/*
#include<bits/stdc++.h>
using namespace std;
void chuanHoa(string &s)
{
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++)
    {
        s[i]= tolower(s[i]);
    }
}
int main()
{
        int t;
        cin>>t;
        cin.ignore();
        while(t--)
        {
        map<string,int> mp;
        string s;
        getline(cin,s);
        vector<string>v;
        stringstream ss(s);
        string tmp;
        string res= "";
        while(ss>>tmp) v.push_back(tmp);
        for(int i=0;i<v.size();i++){
        chuanHoa(v[i]);
        cout<<v[i]<<" ";
        }
        cout<<endl;
        }
        return 0;
}*/

// SO TANG GIAM
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        string s;
        cin>>s;
        stringstream ss(s);
        vector<int>v;
        int tmp;
        while(ss>>tmp) v.push_back(tmp);
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i]>v[j])
                {
                    cnt++;
                }
            }
        }
        if(cnt>0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}