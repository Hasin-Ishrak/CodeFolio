#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int min_distance = min(min(d1 + d2 + d3, d1 + d2 + d2 + d1), min(d1 + d3 + d1 + d3, d2 + d3 + d2 + d3));

    cout << min_distance << endl;

    return 0;
}
