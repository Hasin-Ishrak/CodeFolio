#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main() 
{
    fast;
    ll t;
    cin >> t;
    while(t--)
    {
       ll n;
       cin >> n;
       string a = "zzz"; 
       
       for(int i = 1; i <= 26; i++)
       {
           for(int j = 1; j <= 26; j++)
           {
               for(int k = 1; k <= 26; k++)
               {
                   if(i + j + k == n)
                   {
                       string b;
                       b += char(i - 1 + 'a');
                       b += char(j - 1 + 'a');
                       b += char(k - 1 + 'a');
                       a = min(a, b);
                   }
               }
           }
       }
       cout << a << yo;
    }
}
