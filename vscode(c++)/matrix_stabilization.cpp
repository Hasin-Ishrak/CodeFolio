#include <bits/stdc++.h>
using namespace std;

#define yo "\n"
#define ll long long int 
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);

void stabilizeMatrix(vector<vector<int>>& matrix, int n, int m) {
    bool changed;
    do {
        changed = false;
        vector<vector<int>> new_matrix = matrix;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int top = (i > 0) ? matrix[i - 1][j] : 0;
                int left = (j > 0) ? matrix[i][j - 1] : 0;
                int bottom = (i < n - 1) ? matrix[i + 1][j] : 0;
                int right = (j < m - 1) ? matrix[i][j + 1] : 0;

                int max_neighbor = max({top, left, bottom, right});
                if (matrix[i][j] > max_neighbor) {
                    new_matrix[i][j] = max_neighbor;
                    changed = true;
                }
            }
        }

        matrix = new_matrix;
    } while (changed);
}

void readInput(vector<vector<int>>& matrix, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));

        readInput(matrix, n, m);

        stabilizeMatrix(matrix, n, m);

        printMatrix(matrix, n, m);
    }
}
