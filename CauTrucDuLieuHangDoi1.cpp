#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        queue<int> q;
        while(a--)
        {
                int n;
                cin>>n;
                if(n==1)
                {
                    cout<<q.size()<<endl;
                }
                if(n==2)
                {
                    if(q.empty())  cout<<"YES"<<endl;
                    else   cout<<"NO"<<endl;
                }
                if(n==3)
                { 
                    int x;  
                    cin>>x;  
                    q.push(x);
                }
                if(n==4){
                    if(q.size())  q.pop();
                }
                if(n==5)
                {
                    if(q.empty()){cout<<-1<<endl;}
                    else  
                    {
                        cout<<q.front()<<endl;
                    }
                }
                if(n==6)
                {
                    if(q.empty())
                {
                    cout<<-1<<endl;
                }
                else {
                    cout<<q.back()<<endl;
                }
            }   
        }
    }
    return 0;
}