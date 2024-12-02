#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int b,c;
        if(a%3==0)
        {
            b=a/3;
            c=a/3;
        }
        else if(a%3==1)
        {
            b=(a/3)+1;
            c=a/3;
        }
        else
        {
            b=a/3;
            c=(a/3)+1;
        }

        cout<<b<<" "<<c<<"\n";
    }
}
