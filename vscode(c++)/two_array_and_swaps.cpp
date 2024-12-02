#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      int a,b;
      cin>>a>>b;
      int ar1[a],ar2[a];
      int sum1=0,sum2=0;
      for(int i=0;i<a;i++)
      {
        cin>>ar1[i];
        sum1+=ar1[i];
      }
       for(int i=0;i<a;i++)
      {
        cin>>ar2[i];
      }
      sort(ar1,ar1+a);
      sort(ar2,ar2+a);
      reverse(ar2,ar2+a);
      int k=0;
      for(int i=0;i<a;i++)
      {
        if(ar1[i]<ar2[i])
        {
            swap(ar1[i],ar2[i]);
            k++;
        }
        if(k==b)
         {
            break;
         }
      }
      for(int i=0;i<a;i++)
      {
        sum2+=ar1[i];
      }
      if(sum1>sum2)
      {
        cout<<sum1<<endl;
      }
      else{
        cout<<sum2<<endl;
      }


    }
    
}