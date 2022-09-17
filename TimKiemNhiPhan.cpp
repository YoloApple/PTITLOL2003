#include<iostream>
using namespace std;
int bs(int a[],int n,int x)
{
    int l=0,r=n-1;
    int m=(l+r)/2;
    while(l<=r)
    {
         if(a[m]<x)
        {
            l=m+1;
        }
        else if(a[m]>x)
        {
            r=m+1;
        }
        else{
            return 1;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int &x : a)
    {
    cin>>x;
    }
    cout<<bs(a,n,x)<<endl;
    }
    return 0;
}


////////   cach 2
#include<bits/stdc++.h>
using namespace std;
int binary_search(int A[], int sizeA, int target) {
    int lo = 1, hi = sizeA;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (A[mid] == target)
            return mid;       	
        else if (A[mid] < target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return -1;
}    	
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int a=binary_search(A,n,k);
        if(a==-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<a+1<<endl;
        }
    }
}

//////////////// Cach 3
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int binary_search(vector<int> M, int n,int k) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (M[m] == k)return m+1;
		else if (M[m] < k)l = m + 1;
		else r = m - 1;
	}
	return -1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> M(n);
		for (int i = 0; i < n; i++)cin>> M[i];
		int a = binary_search(M,n, k);
		if (a == -1)cout << "NO\n";
		else cout << a << endl;
	}
}