#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,j=1;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
        i+=j;
        j++;
    }
}