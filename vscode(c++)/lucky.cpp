#include<bits/stdc++.h>
using namespace std;
bool islucky(string tck)
 {
   int sum1=0,sum2=0;
   for(int i =0;i<3;i++)
   {
       sum1+=tck[i];
   }
   for(int i=5 ;i>2;i--)
   {
       sum2+=tck[i];
   }
   return sum1==sum2;
 }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string tck;
      cin>>tck;
      if(islucky(tck))
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }

    }
}
