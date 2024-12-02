#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h ,m;
        cin>>h>>m;
        int time=(24-h-1)*60 +(60-m);
        cout<<time<<endl;
    }
}
