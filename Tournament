// problem B er answer

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;
 
        if (k >= 2) {
            cout << "YES\n";
            continue;
        }
 
        int max_el = *max_element(a.begin(), a.end());
        if (a[j-1] == max_el) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
