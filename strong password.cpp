#include<bits/stdc++.h>
using namespace std;

int compute_time(const string &s) {
    if (s.empty()) return 0;
    int total = 2;
    char prev = s[0];
    for (int i = 1; i < s.size(); ++i) {
        total += (s[i] == prev) ? 1 : 2;
        prev = s[i];
    }
    return total;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int max_time = -1;
        string best;
        int n = s.size();
        for (int i = 0; i <= n; ++i) {
            for (char c = 'a'; c <= 'z'; ++c) {
                string new_str = s.substr(0, i) + c + s.substr(i);
                int current_time = compute_time(new_str);
                if (current_time > max_time) {
                    max_time = current_time;
                    best = new_str;
                }
            }
        }
        cout << best << endl;
    }
    return 0;
}
