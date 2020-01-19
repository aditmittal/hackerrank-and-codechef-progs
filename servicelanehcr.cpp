#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	int ar[n],ent[t],ex[t];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<t;i++)
	{
		cin>>ent[i]>>ex[i];
	}
	for(int i=0;i<t;i++)
	{
		int min;
		min = ar[ent[i]];
		for(int a = ent[i]+1;a<=ex[i];a++)
		{		
			if(ar[a]<min)
			{
				min = ar[a];
			}
		}
		cout<<min<<endl;
	}
}
