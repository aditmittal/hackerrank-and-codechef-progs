#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c;
		cin>>c;
		int h=1;
		if(c>0)
		{
			for(int i=1;i<=c;i++)
		{	
			if(i%2!=0)
			{
				h*=2;	
			}
			else
			{
				h+=1;
			}
		}
		}
		cout<<h<<endl;
	}
}
