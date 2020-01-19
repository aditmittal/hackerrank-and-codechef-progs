#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int ar[t];
	for(int i=0;i<t;i++)
	{
		cin>>ar[i];
		int n,count=0;
		n=ar[i];
		while(n>0)
		{
			int rem;
			rem = n%10;
			n=n/10;
			if(rem==4)
			{
				count++;
			}
		}
		ar[i] = count;
	}
	for(int i=0;i<t;i++)
	{
		cout<<ar[i]<<endl;
	}
}
