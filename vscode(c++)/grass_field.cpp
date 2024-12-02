#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        int a[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }
         for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                c=c+a[i][j];
            }
        }
        if(c==0)
        {
            cout<<0<<endl;
        }
        else if(c>3)
        {
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}