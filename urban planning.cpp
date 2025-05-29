
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
  int64_t ways;
  cin >> ways;
  int n = 2025;
  vector<string> s(n, string(n, '.'));
  s[0] = string(n, '#');
  const int X = 1800;
  for (int i = 1; i < n; i++) {
    int t = 0;
    for (int j = 0; j < n; j++) {
      if (s[i - 1][j] == '.') {
        t = 0;
        continue;
      }
      if (ways < i || (i == 2022 && j > X)) {
        break;
      }
      int64_t cur = t * i;
      if (ways >= cur) {
        ways -= cur;
        s[i][j] = '#';
        t += 1;
      } else {
        t = 0;
      }
    }
  }
  debug(ways);
  int t = 0;
  for (int j = n - 1; j > X + 2; j--) {
    if (ways >= t) {
      s[n - 1][j] = s[n - 2][j] = '#';
      ways -= t;
      t += 1;
    } else {
      t = 0;
    }
  }
  debug(ways);
  assert(ways == 0);
  cout << n << " " << n << '\n';
  for (int i = 0; i < n; i++) {
    cout << s[i] << '\n';
  }
  return 0;
}
