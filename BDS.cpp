#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a%2==0 || a%3==0 && b%2==0 || b%3==0){
            if(a/2==b/2||a/2==b/3||a/3==b/2||a/3==b/3){
            cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
        cout<<"NO"<<endl;
        }
    }
    return 0;
}