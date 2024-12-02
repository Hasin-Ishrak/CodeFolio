#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int odd=0,even=0,sum=0;
        for(int i=0 ;i<n;i++)
        {
            cin>>x;
            sum+=x;
            if(x%2==0)
            {
                even++;
            }
            else{
                odd++;
            }
        }
        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else{
            if(odd>=1 && even>=1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
