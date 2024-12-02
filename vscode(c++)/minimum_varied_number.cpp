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
        string r;
        for(int i=9;i>0;i--)
        {
            if(n>=i)
            {
                r= char('0'+i)+r;
                n-=i;
            }
        }
        cout<<r<<endl;
    }
}