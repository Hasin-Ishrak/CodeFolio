#include<bits/stdc++.h>
using namespace std;

bool ok(const string& s)
{
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            if(i+1>=n || s[i] != s[i+1])
            {
                return false;
            }
            i++;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(ok(s))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}