#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int one=0,two=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }
        if(one%2==0 && two%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(one%2==1 && two%2>=2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}