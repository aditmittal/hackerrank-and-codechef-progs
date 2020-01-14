#include<bits/stdc++.h>

using namespace std;

int main()
{
	int count=0,n,d,m;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cin>>d>>m;
	for(int i=0;i<n-m+1;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			sum = sum + s[i+j];
		}
		if(sum==d)
		{
			count++;
		}
	}
	cout<<count;
}
