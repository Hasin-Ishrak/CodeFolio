#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<string,int>stnc;
    int maxc=0;
    string fqs;

    for(int i=0;i<n-1;i++)
    {
        string substring =s.substr(i,2);
        ++stnc[substring];

        if(stnc[substring]>maxc)
        {
            maxc=stnc[substring];
            fqs = substring ;
        }
    }
    cout<< fqs<<endl;
}