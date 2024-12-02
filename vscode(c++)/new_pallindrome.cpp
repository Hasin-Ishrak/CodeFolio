#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        s=s.substr(0,s.size()/2); 
       int a = unique(s.begin(),s.end()) - s.begin();
       if(a==1)
       {
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    }
}