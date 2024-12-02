#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string c,s="codeforces";
        cin>>c;
        int a=0;
        for(int i=0 ;i<10 ;i++)
        {
            if(c[i]!=s[i])
            {
                a++;
            }
        }
        cout<<a<<endl;
    }
}
