#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string a= s.substr(0,2);
        for(int i=3;i<s.size();i+=2)
        {
            a+=s[i];
        }
        cout<<a<<"\n";
    }
}
