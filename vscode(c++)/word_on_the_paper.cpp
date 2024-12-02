#include <bits/stdc++.h>
using namespace std;
 int main() 
 {
    int t;
    cin>>t;
    while(t--)
    {
        char x;
        string s;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>x;
                if(x!='.')
                {
                    s+=x;
                }
            }
        }
        cout<<s<<endl;
    }
 }
	
