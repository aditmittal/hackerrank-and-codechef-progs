#include<bits/stdc++.h>
using namespace std;

int main()
{
	int count=0;
	int n,k;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>i && ((ar[j] + ar[i])%k==0))
			{
				count++;
			}
		}
	}
	cout<<count;
}
