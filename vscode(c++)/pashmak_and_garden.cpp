#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int main() {
    fast;
    int x1 ,y1 ,x2 ,y2;
    cin >> x1 >> y1 >> x2 >> y2 ;

    if(x1!=x2 && y1 != y2 && abs(x1-x2)!=abs(y1-y2))
    cout << -1 << yo;

    else if(x1==x2)
    cout << x1+abs(y1-y2) << " " << y1 << " " << x2+abs(y1-y2) <<  " "<< y2 << yo;

    else if (y1==y2)
    cout << x1 << " " << y1+abs(x1-x2) <<" " << x2 << " " << y2+abs(x1-x2) << yo;

    else 
    cout << x1 << " " << y2 << " " << x2 << " " << y1<< yo;
    
}