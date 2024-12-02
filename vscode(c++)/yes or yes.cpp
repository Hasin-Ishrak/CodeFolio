#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        if(a=="YES" || a=="yes" || a=="Yes" || a=="yEs" || a=="yeS" || a=="yES"||a=="YEs"||a=="YeS")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
