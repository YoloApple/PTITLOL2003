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
}