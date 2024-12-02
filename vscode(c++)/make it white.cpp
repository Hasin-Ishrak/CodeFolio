#include<bits/stdc++.h>
using namespace std;
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
        int st=0,en=0;
        for(int i=0 ;i<n;i++)
        {
            if(s[i]=='B' && st==0)
            {
                st=i+1;
            }
            if(s[i]=='B' && st!=0)
            {
                en=i+1;
            }
        }
        cout<<abs(en-st)+1<<endl;
    }
}
