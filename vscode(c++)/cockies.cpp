#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

int main()
{
    fast;
    
    int n,even=0,odd=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]%2==0)
        {
            even++;
        }   
        else{
            odd++;
        }
    }
    if(odd==1)
    {
        cout<< 1 <<"\n";
    }
    else if(odd%2==0)
    {
        cout<< even <<"\n";
    }
    else{
        cout<< odd <<"\n";
    }


}    