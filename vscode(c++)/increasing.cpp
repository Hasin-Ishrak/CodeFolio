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
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       bool A=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]==a[i+1])
           {
               A=1;
               break;
           }
       }
       if(A==0)
       {
           cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
}
