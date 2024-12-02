#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,r,g,b,R,G,B;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<6;i++)
        {
            if(s[i]=='R')
            {
                R=i;
            }
            if(s[i]=='G')
            {
                G=i;
            }
            if(s[i]=='B')
            {
                B=i;
            }
            if(s[i]=='r')
            {
                r=i;
            }
            if(s[i]=='g')
            {
                g=i;
            }
            if(s[i]=='b')
            {
                b=i;
            }
        }
        if(R>r && G>g && B>b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}