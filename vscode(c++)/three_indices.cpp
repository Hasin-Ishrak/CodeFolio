#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define ull unsigned long long 
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;

int main()
{
    fast;
    int t;
    cin >> t;
    while(t--)
    {    
        int n;
        cin>>n;
        vector<int>v(n);
        int x,y,z;
        x = y = z = -1 ;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        for(int i=1; i<n-1; i++){
            if(v[i-1] < v[i]){
                if(v[i] > v[i+1]){
                    x = i;
                    y = i + 1;
                    z = i + 2;
                    break;
                }
            }
        }
        if( (x != y && y!= z) && (x != -1)){
            cout<<"YES"<<yo;
            cout<<x<<" "<<y<<" "<<z<<yo;
        }
        else{
            cout<<"NO"<<yo;
        }
    }
}
