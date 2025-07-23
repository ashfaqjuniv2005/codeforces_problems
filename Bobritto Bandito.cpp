#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int R_prime = min(m, r);
        int L_prime = R_prime - m;

       
        cout << L_prime << " " << R_prime << endl;
    }

    return 0;
}
