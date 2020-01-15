#include<bits/stdc++.h>

using namespace std;

int rev(int n)
{
	int r,s=0;
	while(n>0)
	{
		r=n%10;
		s = (s*10)+r;
		n=n/10;
	}
	return s;
}

int main()
{
	int i,j,d;
	cin>>i>>j>>d;
	int count=0;
	for(int x=i;x<=j;x++)
	{
		int dif;
		dif = abs(x - rev(x));
		if(dif%d==0)
		{
			count++;
		}
	}
	cout<<count;
}
