#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int birds[]={0,0,0,0,0};
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		birds[arr[i]-1] += 1;
	}
	int max=0;
	for(int i=0;i<5;i++)
	{
		if(max<birds[i])
		{
			max=birds[i];
		}
	}
	for(int i=0;i<5;i++)
	{
		if(birds[i]==max)
		{
			cout<<i+1;
			break;
		}
	}
}
