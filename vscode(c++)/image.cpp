#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,p;
        cin>>s>>p;
        s=s+p;
        cout<<set<char>(s.begin(),s.end()).size()-1<<endl;
    }
}
