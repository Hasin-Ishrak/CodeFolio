#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int odd =0 ,even =0;
    int oddin=0,evenin=0;
    for(int i =0; i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            even++;
            evenin=i;
        }
        else
        {
            odd++;
            oddin=i;
        }
    }
    if(even>odd)
    {
        cout<<oddin+1;
    }
    else{
        cout<<evenin+1;
    }
    return 0;

}
