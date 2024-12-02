#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
   fast; 
   ll t;
   cin>>t;
   while(t--)
   {
    string s;
    cin>>s;
    ll c=s.length();
    ll a=0,b=0,one=0,zero=0;
    for(int i=0;i<c;i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else{
            one++;
        }
    }
    int k = min(zero,one);
    if(k%2!=0)
    {
        cout<<"DA"<<yo;
    }
    else{
        cout<<"NET"<<yo;
    }
   }
}