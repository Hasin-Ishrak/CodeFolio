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
        int e,c=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='+')
            {
                c++;
            }
            else if(s[i]=='-')
            {
                d++;
            }
        }
        e=abs(c-d);
        cout<<e<<endl;
     }
}