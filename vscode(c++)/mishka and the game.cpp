#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mishkaWins = 0, chrisWins = 0;

    for (int i = 0; i < n; ++i) {
        int m, c;
        cin >> m >> c;
        if (m > c)
            mishkaWins++;
        else if (c > m)
            chrisWins++;
    }

    if (mishkaWins > chrisWins)
        cout << "Mishka" << endl;
    else if (chrisWins > mishkaWins)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}
