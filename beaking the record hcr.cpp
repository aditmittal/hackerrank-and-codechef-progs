#include<bits/stdc++.h>

using namespace std;

int main()
{
	int maxr,minr,n;
	cin>>n;
	long int sc[n]; 
	for(int i=0;i<n;i++)
	{
		cin>>sc[i];
	}
	int max=0;
	int min=0;
	maxr = sc[0];
	minr = sc[0];
	for(int i=1;i<n;i++)
	{
		if(sc[i]>maxr)
		{
			maxr = sc[i];
			max++;
		}
		else if(sc[i]<minr)
		{
			minr = sc[i];
			min++;
		}
	}
	cout<<max<<" "<<min;
}
