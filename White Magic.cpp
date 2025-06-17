
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<vector<int>> at(n + 1);
    for (int i = 0; i < n; i++) {
      if (a[i] <= n) {
        at[a[i]].push_back(i);
      }
    }
    if (at[0].empty()) {
      cout << n << '\n';
      continue;
    }
    int ans = n - int(at[0].size());
    vector<int> seq;
    for (int i = 0; i < n; i++) {
      if (a[i] > 0 || i == at[0][0]) {
        seq.push_back(a[i]);
      }
    }
    vector<bool> was(n + 1, false);
    int mex = 0;
    bool fail = false;
    for (int i = int(seq.size()) - 1; i >= 0; i--) {
      if (seq[i] < mex) {
        fail = true;
        break;
      }
      if (seq[i] <= n) {
        was[seq[i]] = true;
      }
      while (was[mex]) {
        mex += 1;
      }
    }
    if (!fail) {
      ans += 1;
    }
    cout << ans << '\n';
  }
  return 0;
}
