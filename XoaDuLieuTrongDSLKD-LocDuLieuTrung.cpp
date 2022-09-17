//Xoa Du Lieu Trong DSLKD
#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=k)
        {
            cout<<a[i]<<" ";
        }
    }
}
*/
////Loc DuLieuTrung Trong DSLKD
int main()
{
    int n;
    cin>>n;
    int a[n];
    bool check[10000] = { false };
	unordered_set<int> X;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
		if (!check[a[i]]) {
			cout << a[i] << " ";
			check[a[i]] = true;
		}
}

