#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el  "\n"

void insertionSort(vector<ll>& a) 
{
    ll n = a.size();
    for (ll i=1;i<n; i++) 
    {
        ll key= a[i];
        ll j=i-1;
        while (j>=0 &&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }   
}
void bubbleSort(vector<ll>&a) 
{
    ll n= a.size();
    for (ll i=0;i<n-1;i++) 
    {
    for (ll j= 0;j<n-i-1;j++)
    {
            if (a[j]>a[j+1])
            {
            swap(a[j],a[j+1]);
            }
        }
    }
}
bool binarySearch(const vector<ll>& a,ll target)
{
    int l = 0,r = a.size()-1;
    while (l<=r) {
        int mid = l+(r-l)/2;
        if (a[mid] == target)
        {
            return 1;
        }
        if (a[mid] < target)
        {
            l= mid+ 1;
        } else {
            r= mid- 1;
        }
    }
    return 0;
}
int main(){
    ll n;
    cin >> n;
    vector<ll>r(n);
    for (ll i=0;i<n;i++)
    {
        cin >>r[i];
    }
    ll regi;
    cin >>regi;
    if (regi%2==0)
    {
        insertionSort(r);
    } else
    {
        bubbleSort(r);
    }
    for (auto num: r) 
    {
        cout <<num<< " ";
    }
    cout <<el;
    ll t;
    cin >>t;
    if (binarySearch(r,t))
    {
        cout <<t<<"Found";
    } else
    {
        cout <<t<<"Not found";
    }
}
