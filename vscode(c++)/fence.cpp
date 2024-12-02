#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b)
        {
            swap(a,b);
        }
        if(b>c)
        {
            swap(b,c);
        }
        cout<<max(1,c-a-b+1)<<endl;
    }
}