#include<bits/stdc++.h>

using namespace std;

int main()
{
	int b,n,m;
	cin>>b>>n>>m;
	int kb[n],ud[m];
	for(int i=0;i<n;i++)
	{
		cin>>kb[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>ud[i];
	}
	int max=-1,s=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			s = kb[i] + ud[j];
			if(s>max and s<=b)
			{
				max=s;
			}
			
		}
	}
		cout<<max;
}
