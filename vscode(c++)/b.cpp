#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> utensilCount;
    for (int i = 0; i < n; ++i) {
        int utensil;
        cin >> utensil;
        utensilCount[utensil]++;
    }

    int totalMissingUtensils = 0;
    for (auto& it : utensilCount) {
        int utensilType = it.first;
        int utensilNeeded = k - it.second % k; // Calculate how many utensils are missing for each type
        if (utensilNeeded != k) {
            totalMissingUtensils += utensilNeeded;
        }
    }

    cout << totalMissingUtensils << endl;

    return 0;
}
