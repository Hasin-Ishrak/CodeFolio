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
        int n=s.size();
        bool k=0;
        if(n%2==0)
        {
          for(int i=0;i<n/2;i++)
          {
              if(s[i]==s[n/2+i])
              {

              }
              else
              {
                  k=1;
              }
          }
          if(k==1)
          {
              cout<<"NO"<<endl;
          }
          else
          {
              cout<<"YES"<<endl;
          }
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
