#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int count=0;
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			if(ar[i]<ar[j] and ar[j] - ar[i] == d)
			{
				for(int k=j+1;k<n;k++)
				{
					if(ar[j]<ar[k] and ar[k] - ar[j] == d)
					{
						count++;
					}
				}
			}
		}
	}
	cout<<count<<endl;
}
