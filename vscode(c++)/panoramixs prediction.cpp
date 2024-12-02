#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a=0,b=0,i;
    for( i =2;i<10;i++)
    {
        if(m%i==0)
        {
            a++;
        }
    }
    if(n==2 && m==3)
    {
        b=1;
    }
    else if(n==3 &&m==5)
    {
         b=1;
    }
    else if(n==5 && m==7)
    {
         b=1;
    }
    else if(n==7 && m==11)
    {
         b=1;
    }
    else if(n==11 && m==13)
    {
         b=1;
    }
    else if(n==13 && m==17)
    {
         b=1;
    }
    else if(n==17 &&m==19)
    {
         b=1;
    }
    else if(n==19 &&m==23)
    {
         b=1;
    }
    else if(n==23 && m==29)
    {
         b=1;
    }
    else if(n==29 && m==31)
    {
         b=1;
    }
    else if(n==31 && m==37)
    {
         b=1;
    }
    else if(n==37 && m==41)
    {
         b=1;
    }
    else if(n==41 && m==43)
    {
         b=1;
    }
    else if(n==43 && m==47)
    {
         b=1;
    }

    if(a<=1 && b==1)
    {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO";
    }
}
