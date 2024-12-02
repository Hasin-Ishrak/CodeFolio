#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int zero=0,one=0;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else{
            one++;
        }
    }
    if(zero==1 || one==1)
    {
        if(n>1)
        {
            cout<<n-2;
        }
        else{
            cout<<n;
        }
    }
    else{
        cout<<abs(zero-one);
    }

}