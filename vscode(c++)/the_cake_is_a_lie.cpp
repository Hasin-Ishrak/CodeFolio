#include<bits/stdc++.h>
using namespace std;
void calcu()
{
    int m,n,k;
    cin>>m>>n>>k;
     if(n==1 && m==1 && k==0)
     {
        cout<<"YES"<<"\n";
     }
    
       else if((n*m)-1 == k)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        calcu();
    }

}