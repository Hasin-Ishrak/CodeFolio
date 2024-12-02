#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        for(int i=1;i<n;i++)
        {
         if((i*i)<n)
         {
             c++;
         }
         else if((i*i*i)<n)
         {
             c++;
         }
         else
         {
             break;
         }
        }
        cout<<c<<endl;
    }
}
