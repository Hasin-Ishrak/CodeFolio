#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    string a,b,c;
    cin>>n;
    set<string>s;

    while(n--)
    {
        
        cin>>a>>b;
        c = b+a;
        s.insert(c);
    }
    cout<<s.size()<<endl;
}