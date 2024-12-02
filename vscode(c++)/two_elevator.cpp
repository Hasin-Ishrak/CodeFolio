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
        int d= abs(b-c);
        int e=d+c;
        if(a>e)
        {
            cout<<"2"<<endl;
        }
        else if(e>a)
        {
            cout<<"1"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
    }
}