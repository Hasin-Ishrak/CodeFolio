#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long  n;
    cin>>n;
    if(n%2)
    {
        cout<<"YES"<<endl;
        return;
    }
    while(n%2 == 0)
    {
        n /= 2;
    }
    if(n>1)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}