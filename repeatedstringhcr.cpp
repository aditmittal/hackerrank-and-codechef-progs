#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) 
{
    long t;
    t = s.length();
    long ar[t];
    for(int i=0;i,t;i++)
    {
        ar[i]=0;
    }
    for(int i=0;i<t;i++)
    {
        if(s[i]=='a')
        {
            ar[i]++;
        }
    }
    for(long i=0;i<n-1;i++)
    {
        for(int j=0;j<t;j++)
        {
            if(s[j])
            {
                s[j]++;
            }
        }
    }
    long count=0;
    for(int i=0;i<t;i++)
    {
        count+=s[i];
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

