#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ar[3]={a,b,c};
        sort(ar,ar+3);
        cout<<ar[1]<<endl;
    }
}
