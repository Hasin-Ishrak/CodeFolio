#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int k=0;
    while(n>=0)
    {
        k++;
        int x;
        if(k%2==1)
        {
            x=a;
        }
        else{
            x=b;
        }
        int y=n;
        while(y!=0)
        {
            int temp=y;
            y=x%y;
            x=temp;
        }
        n-=x;
    }
    if(k%2==1)
    {
        cout<<1;
    }
    else{
        cout<<0;
    }
}