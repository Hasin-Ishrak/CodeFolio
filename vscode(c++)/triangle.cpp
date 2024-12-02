#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

   vector<int>n(4);
   for(int i=0;i<4;i++)
   {
    cin>>n[i];
   }
    sort(n.begin(),n.end());
    
    for(int i=0;i<2;i++)
    {
        if(n[i]+n[i+1]>n[i+2])
        {
            cout<<"TRIANGLE"<<endl;
            return 0;
         }
        }
    

    for(int i=0;i<2 ;i++)
    {
        if(n[i]+n[i+1]==n[i+2])
        {
            cout<<"SEGMENT"<<endl;
            return 0;
        }
        
    }

        cout<<"IMPOSSIBLE"<<endl;
    
    return 0;
}