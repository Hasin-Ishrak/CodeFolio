#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define prb cin.exceptions(ios::badbit | ios::failbit);
#define ll long long
#define el '\n'

string isBalanced(string s) {
    stack<char> st;
    bool ans = 1;
    for (auto &i : s) {
        if (i == '(' || i == '{' || i == '[') {
            st.push(i);
        } else {
            if (st.empty()) {
                ans = 0;
                break;
            } else {
                if ((st.top() == '(' && i == ')') || 
                    (st.top() == '{' && i == '}') || 
                    (st.top() == '[' && i == ']')) {
                    st.pop(); 
                } else {
                    ans = 0; 
                }
            }
        }
    }
    if (!st.empty()) {
        ans = 0;
    }

    return ans ? "YES" : "NO";
}

int main() {
    string s;

    cout << "Enter the string of brackets: ";
    cin >> s;

    string result = isBalanced(s);
    cout << "Is the string balanced? " << result << el;
}