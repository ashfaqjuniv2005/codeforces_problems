
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> b(n);
    bool ok = true;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      --x;
      if (i > 0) {
        if ((x == 0 || b[x - 1] == 0) && (x == n - 1 || b[x + 1] == 0)) {
          ok = false;
        }
      }
      b[x] = 1;
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
  return 0;
}
