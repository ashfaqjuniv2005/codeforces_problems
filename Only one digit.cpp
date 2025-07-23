#include <bits/stdc++.h>
using namespace std;

// Function to check if x and y share at least one digit
bool hasCommonDigit(int x, int y) {
    set<char> digitsX;
    for (char c : to_string(x)) {
        digitsX.insert(c);
    }
    for (char c : to_string(y)) {
        if (digitsX.count(c)) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; // number of test cases
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int y = 0;
        while (true) {
            if (hasCommonDigit(x, y)) {
                cout << y << '\n';
                break;
            }
            y++;
        }
    }

    return 0;
}
