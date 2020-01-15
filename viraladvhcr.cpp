#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,liked=0,p=5;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		liked += p/2;
		p = (p/2)*3;
	}
	cout<<liked;
}
