#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s=0;
		cin>>n;
		s+=(n%10);
		while(n>=10)
		{
			n=n/10;
		}
		s=s+n;
		cout<<s<<endl;
	}
}
