#include <bits/stdc++.h>

using namespace std;
int main()
{
    int p;
    cin>>p;
    while(p--)
    {

        int n,m=0;
        cin >> n;
        string s, t;
        cin >> s >> t;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                if (t[i] != 'R')
                {
                    m=1;
                    break ;

                }


            }
            else
            {
                if (t[i] == 'R')
                {
                    m=1;
                    break ;
                }
            }
        }
        if(m==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}
