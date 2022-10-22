#include<bits/stdc++.h>
using namespace std;
struct Tree
{
    char value;
    Tree *left;
    Tree *right;
};
bool isOp(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/')  return true;
    return false;
}
Tree *newNode(char val)
{
    Tree *temp= new Tree;
    temp->left=temp->right=NULL;
    temp->value=val;
    return temp;
}
void LNR(Tree *t)
{
    if(t!=NULL)
    {
        LNR(t->left);
        cout<<t->value;
        LNR(t->right);
    }
}
void initwsolve()
{
    string s;
    cin>>s;
    stack<Tree *>st;
    Tree *t,*t1,*t2;
    for(int i=0;i<s.length();i++)
    {
        if(!isOp(s[i]))
        {
            t=newNode(s[i]);
            st.push(t);
        }
        else{
            t=newNode(s[i]);
            if(!st.empty())
            {
                t1=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                t2=st.top();
                st.pop();
            }
            t->left=t2;
            t->right=t1;
            st.push(t);
        }
    }
    if(!st.empty())
    {
        t=st.top();
    }
        LNR(t);
        cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        initwsolve();
    }
    return 0;
}