#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int t;

    cin >> t;
    
    while (t--) {
        int b, c, h;

        cin >> b >> c >> h;

        int d= h+c;

        if(d<b)
        {
            cout<< d+(d+1)<<endl;
        }
        else{
            cout<<b+(b-1)<<endl;
        }
    }
}
