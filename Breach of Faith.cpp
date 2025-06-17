//source from tourist

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
    vector<int> b(2 * n);
    for (int i = 0; i < 2 * n; i++) {
      cin >> b[i];
    }
    sort(b.rbegin(), b.rend());
    int64_t sum = 0;
    for (int i = 0; i < 2 * n; i++) {
      if (i <= n) sum += b[i];
      else sum -= b[i];
    }
    vector<int64_t> a(2 * n + 1, -1);
    for (int i = 0; i <= n; i++) {
      a[2 * i] = b[i];
    }
    for (int i = n + 1; i < 2 * n; i++) {
      a[(i - n) * 2 + 1] = b[i];
    }
    a[1] = sum;
    for (int i = 0; i <= 2 * n; i++) {
      cout << a[i] << " \n"[i == 2 * n];
    }
  }
  return 0;
}
