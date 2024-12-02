#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool colored = false;
    char pixel;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> pixel;
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
                colored = true;
            }
        }
    }

    if (colored) {
        cout << "#Color" << endl;
    } else {
        cout << "#Black&White" << endl;
    }

    return 0;
}
