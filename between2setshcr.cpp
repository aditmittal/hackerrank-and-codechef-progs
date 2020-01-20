#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int min=999,max=0;
	int a1[n],a2[m];
	for(int i=0;i<n;i++)
	{
		cin>>a1[i];
		if(a1[i]<min)
		{
			min = a1[i];
		}
	}
	for(int i=0;i<m;i++)
	{
		cin>>a2[i];
		if(a2[i]>max)
		{
			max = a2[i];
		}
	}
	int count=0;
	for(int i=min;i<=max;i++)
	{
		int fa1=0,fa2=0;
		for(int a=0;a<n;a++)
		{
			if(i%a1[a]!=0)
			{
				fa1=1;
				break;
			}
		}
		for(int b=0;b<m;b++)
		{
			if(a2[b]%i!=0)
			{
				fa2=1;
				break;
			}
		}
		if(fa1==0 and fa2==0)
		{
			count++;
		}
	}
	cout<<count<<endl;
}
