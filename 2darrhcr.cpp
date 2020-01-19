#include<bits/stdc++.h>

using namespace std;

int main()
{
	int ar[6][6];
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin>>ar[i][j];
		}
	}
	int sum[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			sum[i][j] = 0;
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			sum[i][j] += ar[i][j] + ar[i][j+1] + ar[i][j+2];
		}
	}
	for(int i=1;i<5;i++)
	{
		for(int j=1;j<5;j++)
		{
			sum[i-1][j-1] += ar[i][j];
		}
	}
	int max=-30;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			sum[i][j] += ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
			if(sum[i][j]>max)
			{
				max = sum[i][j];
			}
		}
	}
	cout<<max;
}
