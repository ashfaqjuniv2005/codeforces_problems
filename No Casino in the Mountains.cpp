#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int hikes = 0;
        int i = 0;
        while (i <= n - k) {
            // Check if k days from i are all 0
            bool canHike = true;
            for (int j = 0; j < k; ++j) {
                if (a[i + j] == 1) {
                    canHike = false;
                    break;
                }
            }

            if (canHike) {
                hikes++;
                i += k + 1; // skip hike days + 1 rest day
            } else {
                i++;
            }
        }

        cout << hikes << '\n';
    }

    return 0;
}
