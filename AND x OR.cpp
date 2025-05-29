
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    int64_t nop = 0;
    for (int i = 0; i < n; i++) {
      nop += abs(a[i] - b[i]);
    }
    m += 1;
    while (m & (m + 1)) {
      m += 1;
    }
    sort(b.begin(), b.end());
    if (unique(b.begin(), b.end()) != b.end()) {
      cout << 0 << '\n';
      continue;
    }
    b.push_back(m + 1);
    const int inf = int(1e9);
    int ans = inf;
    vector<int> f(m + 1, inf);
    for (int i = 0; i < n; i++) {
      for (int j = b[i]; j < b[i + 1]; j++) {
        for (int bit = 0; (1 << bit) <= j; bit++) {
          if (j & (1 << bit)) {
            f[j] = min(f[j], f[j ^ (1 << bit)]);
          }
        }
        if (i > 0) {
          f[j] = min(f[j], j - b[i - 1]);
        }
        ans = min(ans, f[j] + (j - b[i]));
      }
      for (int j = b[i]; j < b[i + 1]; j++) {
        for (int bit = 0; (1 << bit) <= j; bit++) {
          if (j & (1 << bit)) {
            f[j] = min(f[j], f[j ^ (1 << bit)]);
          }
        }
        f[j] = min(f[j], j - b[i]);
      }
    }
    cout << min<int64_t>(nop, ans) << '\n';
  }
  return 0;
}
