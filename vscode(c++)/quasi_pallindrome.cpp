#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
int pal(string s)
{
    int l =s.size();
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
   fast;
   string s;
   cin>>s;
   if(pal(s))
   {
    cout<<"YES"<<yo;
    return 0;
   }
   int i =s.size()-1;
   while(s[i]=='0' && i>=0)
   {
    s.erase(i,1);
    i--;
   }
   if(pal(s))
   {
    cout<<"YES"<<yo;
   }
   else{
    cout<<"NO"<<yo;
   }

}