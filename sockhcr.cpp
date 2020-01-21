#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int cl[n];
	int pr[100];
	for(int i=0;i<n;i++)
	{
		cin>>cl[i];
	}
	for(int i=1;i<=100;i++)
	{
		pr[i] = 0;
	}
	for(int i=1;i<=100;i++)
	{
		pr[cl[i]]++;
	}
	 int count=0;
    for(int i=0;i<100;i++)
    {
        count += int(pr[i]/2);
    }
	cout<<count<<endl;
}
