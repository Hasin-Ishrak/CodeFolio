#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,h=0;
        cin>>a>>b>>c>>d;
        if(a>b && a>c &&a>d)
        {
            h=0;
        }
        else if(a>c&&a>d&&a<b)
        {
            h=1;
        }
        else if(a<c&&a>d&&a>b)
        {
            h=1;
        }
        else if(a>c&&a<d&&a>b)
        {
            h=1;
        }
        else if(a>b&&a<c&&a<d)
        {
            h=2;
        }
         else if(a<b&&a>c&&a<d)
        {
            h=2;
        }
         else if(a<b&&a<c&&a>d)
        {
            h=2;
        }
        else
        {
            h=3;
        }

        cout<<h<<endl;
    }
}
