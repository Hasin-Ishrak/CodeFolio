#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    string s,p,q;
    cin>>s;
    cin>>p;
    cin>>q;
    if((s=="paper" && p=="rock" && q =="rock") || (s=="scissors" && p=="paper" && q=="paper") || (s=="rock" && p=="scissors" && q=="scissors"))
    {
        cout<<"F"<<yo;
    }
     else if((s=="rock" && p=="paper" && q =="rock") || (s=="paper" && p=="scissors" && q=="paper")|| (s=="scissors" && p=="rock" && q=="scissors"))
     {
        cout<<"M"<<yo;
     }
     else if((s=="rock" && p=="rock" && q =="paper") || (s=="paper" && p=="paper" && q=="scissors")|| (s=="scissors" && p=="scissors" && q=="rock"))
     {
        cout<<"S"<<yo;
     }
     else{
        cout<<"?"<<yo;
     }
}