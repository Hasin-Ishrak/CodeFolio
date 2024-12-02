#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=n/3;
        if(n==1)
        {
            cout<<2<<endl;
        }
        else if(n%3)
        {
            cout<<a+1<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
}