#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,k;
        int n;

        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int count=1,max=1;

        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
                count++;
            else
            {
                if(count>max)
                    max=count;

                count=1;
            }
        }

        if(count>max)
            max=count;

        cout<<max;

        return 0;
}
