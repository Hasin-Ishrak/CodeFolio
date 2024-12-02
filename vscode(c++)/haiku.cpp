#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
const ll mod = 1e6 + 123;

int count(const string &s)
{
    int n=0;  
   for(char e :s)
   {
     if(e=='a' || e=='e' || e=='i' || e=='o' || e=='u')
     n++;
   }
    return n;
}

int main() {
    fast;
    string a ,b,c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    if(count(a)==5 && count(b)==7 && count(c)==5)
    cout << "YES" <<yo;
    
    else 
    cout << "NO" <<yo;
}