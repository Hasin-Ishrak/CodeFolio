#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int ar[n];
  int s=0,d=0;
  for(int i=0;i<n;i++)
  {
      cin>>ar[i];
  }
  int l=0,r=n-1;
  int c=0;
  while(l<=r)
  {

  if(c%2==0)
  {
      if(ar[l]>ar[r])
      {
          s+=ar[l];
          l++;
      }
      else
      {
          s+=ar[r];
          r--;
      }
  }
  else
  {

      if(ar[l]>ar[r])
      {
          d+=ar[l];
          l++;
      }
      else
      {
          d+=ar[r];
          r--;
      }
  }
  c++;
  }
  cout<<s<<" "<<d<<" ";

  }

