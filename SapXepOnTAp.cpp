#include<bits/stdc++.h>
using namespace std;
int TimKiem(int a[], int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
			{
				return i;
			}
	}
	return -1;
}
int Binary_Search(int a[],int n,int x)
{
	int low=0;
	int high=n-1;
	int mid=(low+high)/2;
	while(low<=high)
	{
		if(x>a[mid])
		{
			low=mid+1;
		}
		else if(x<a[mid])
		{
			high=mid-1;
		}
		else
		{
			return mid;
		}
		mid=(low+high)/2;
	}
	return -1;
}
void Bubble_Sort(int a[],int n)
{	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
void Selection_Sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		swap(a[i],a[min]);
	}
}
void Insertion_Sort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int tmp=a[i];
		int j=i-1;
		while(j>=0 && a[j]>tmp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=tmp;
	}
}
//void Quick_Sort(int a[],int left,int right)
//{
//	int i=left; int j=right;
//	int p=a[left+rand()%(right-left)];
//	while(i<=j)
//	{
//		while(a[i]<p)    ++i;
//		while(a[j]>p)    --j;
//		if(i<=j)
//		{
//			swap(a[i],a[j]);
//			++i;
//			--j;
//		}
//		
//	}
//	if(left<j)    Quick_Sort(a,left,j);
//	if(i<right)   Quick_Sort(a,i,right);
//}
void Quick_Sort(int a[],int left,int right)
{
	int i=left;
	int j=right;
	int x=a[(left+right)/2];
	do
	{
		while(a[i]<x)   i++;
		while(a[j]>x)   j--;
		if(i<=j)
		{
			swap(a[i],a[j]);
			++i;
			--j;
		}
	}  	while(i<=j);	
	if(left<j)   Quick_Sort(a,left,j);
	if(i<right)   Quick_Sort(a,i,right);
}
int main()
{
	int n,x;
	cin>>n;
	//cin>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	int t =TimKiem(a,n,x);
//	cout<<t<<endl;
//	int s=Binary_Search(a,n,x);
//	cout << s <<endl;
//	Bubble_Sort(a,n);
//	Selection_Sort(a,n);
//	Insertion_Sort(a,n);
	Quick_Sort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
