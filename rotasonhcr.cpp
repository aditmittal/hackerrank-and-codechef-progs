#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,d;
	int ar[n];
	cin>>n>>d;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	while(d--)
	{
		int temp;
		temp = ar[0];
		for(int i=1;i<n;i++)
		{
			ar[i-1] = ar[i];
		}
		ar[n-1] = temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
}
