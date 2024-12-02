#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i =0 ; i<n ; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool is=true;
        for(int j =n-1 ; j>0 ; j--)
        {
            if(arr[j]-arr[j-1]>1)
            {
               is=false;
               break;
            }
        }
         if(is)
         {
             cout<<"YES"<<"\n";
         }
         else
         {
             cout<<"NO"<<"\n";
         }

    }
}
