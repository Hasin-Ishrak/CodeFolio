#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
       string n;
       cin>>n;
       int maxd=0;

       for(char c :n )
       {
           maxd= max(maxd,c-'0');
       }

       cout<< maxd << endl;
          
    }
}