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
        int a=1;
        int b=n-a;
        if(n%2==0)
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }
    }
}