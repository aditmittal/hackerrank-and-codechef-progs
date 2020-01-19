#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c,m,bar=0,wrap=0;
		cin>>n>>c>>m;
		bar = (n/c);
		wrap = bar;
		while(wrap>=m)
		{
			int x;
			x = wrap/m;
			bar+=x;
			wrap = x + (wrap%m);
		}
		cout<<bar<<endl;
	}
}
