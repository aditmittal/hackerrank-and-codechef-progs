#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n],min=9999;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(ar[i]==ar[j])
            {
                if(min>(j-i))
                {
                    min = (j-i);
                }
            }
        }
    }
    if(min==9999)
    {
        cout<<-1<<endl;
    }
    else 
    {
        cout<<min<<endl;
    }
}

