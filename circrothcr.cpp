#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,q;
	cin>>n>>k>>q;
	int ar[n];
	int rot = k%n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<q;i++)
	{
		int q;
		cin>>q;
		if(q-rot>=0)
		{
			cout<<ar[q-rot]<<endl;
		}
		else
		{
			cout<<ar[q-rot+n]<<endl;
		}
	}
	
}
