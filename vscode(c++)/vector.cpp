#include<bits/stdc++.h>
using namespace std;
int largest_number(int a[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}


int main()
{
    int a[]={1,2,3,5,6,7};
    int largeele=largest_number(a,6);
    

   
}
