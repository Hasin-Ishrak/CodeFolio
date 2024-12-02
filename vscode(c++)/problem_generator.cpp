#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;

        int c[7]={0};
        for(char p : s)
        {
            c[p-'A']++;
        }
        int ans=0;
        for(int i=0;i<7;i++)
        {
            if(c[i]<m)
            {
                ans+=(m-c[i]);
            }
        }
        cout<< ans << "\n";
    }
}