
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << ((a < b) == (c < d) ? "YES" : "NO") << '\n';
  }
  return 0;
}
