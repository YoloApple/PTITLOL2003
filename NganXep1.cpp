#include<bits/stdc++.h>
#include<stack>
using namespace std;;

struct Stack{
    int top;
    int a[200];
};

int main()
{
    string key;
    Stack st;
    st.top=-1;
    while(true)
    {
        cin>>key;
        if(key=="push"){
            int value;
            cin>>value;
            st.top=st.top+1;
            st.a[st.top]=value;
        }
        else if(key=="pop")
        {
            if(st.top!=-1)
            {
                st.top=st.top-1;
            }
            if(st.top==-1)
            {
                cout<<"empty\n";
                break;
            }

        }
        else{
            if(st.top==-1)
            {
                cout<<"empty\n";
                break;
            }
            else
            {
                for(int i=0;i<=st.top;i++)
                {
                    cout<<st.a[i]<<" ";    
                    
                }
                cout<<endl;
            }
        }
    }
}
