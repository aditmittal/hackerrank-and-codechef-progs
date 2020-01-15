#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	char val[n];
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	int count=0,s=0;
	if(val[0]=='U')
	{
		s=1;
	}
	else
	{
		s=-1;
	}
	for(int i=1;i<n;i++)
	{
		if(val[i]=='D')
		{
			s-=1;
		}
		else if(s==-1 && val[i]=='U')
		{
			s+=1;
			count+=1;
		}
		else if(val[i]=='U')
		{
			s+=1;
		}
	}
	cout<<count;
}
