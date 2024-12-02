#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string str;
    int ar[26]={0},len,s=0;
    cin>>len;
    cin>>str;
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[i+1])
        {
            ar[str[i]-65]++;
        }
    }
    for(int j=0;j<26;j++)
    {
        if(ar[j]>1)
        {
            s=1;
            break;
        }
    }
    if(s==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
}