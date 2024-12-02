#include<bits/stdc++.h>
using namespace std;

int minmove(int a,int b)
{
    int d = abs(b-a);
    int moves =d/10;
    if(d%10!=0)
    {
        moves++;
    }
    return moves;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<minmove(a,b)<<"\n";
    }
}
