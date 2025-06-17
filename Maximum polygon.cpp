
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
    vector<int> res;
    auto Test = [&](int mx) {
      vector<int> b;
      for (int x : a) {
        if (x <= mx) {
          b.push_back(x);
        }
      }
      int len = int(b.size());
      vector<int64_t> suf(len + 1);
      for (int i = len - 1; i >= 0; i--) {
        suf[i] = suf[i + 1] + b[i];
      }
      vector<int> order_suf(len);
      iota(order_suf.begin(), order_suf.end(), 0);
      sort(order_suf.begin(), order_suf.end(), [&](int i, int j) {
        return suf[i] > suf[j];
      });
      vector<int> order(len);
      iota(order.begin(), order.end(), 0);
      sort(order.begin(), order.end(), [&](int i, int j) {
        return b[i] > b[j] || (b[i] == b[j] && i < j);
      });
      priority_queue<pair<int, int>> alive;
      int64_t need = 2 * mx + 1;
      int ptr = 0;
      while (ptr < len && suf[order_suf[ptr]] >= need) {
        alive.emplace(b[order_suf[ptr]], -order_suf[ptr]);
        ptr += 1;
      }
      vector<int> seq;
      int last = -1;
      while (!alive.empty()) {
        auto [val, i] = alive.top();
        alive.pop();
        i = -i;
        // debug(val, i);
        if (i > last) {
          seq.push_back(b[i]);
          last = i;
          need -= b[i];
          while (ptr < len && suf[order_suf[ptr]] >= need) {
            alive.emplace(b[order_suf[ptr]], -order_suf[ptr]);
            ptr += 1;
          }
        }
      }
      // debug(b, order, seq, need);
      if (need <= 0) {
        res = max(res, seq);
      }
    };
    auto xs = a;
    sort(xs.begin(), xs.end());
    xs.resize(unique(xs.begin(), xs.end()) - xs.begin());
    int sz = int(xs.size());
    for (int i = 0; i < sz; i++) {
      if (i == sz - 1 || xs[i] * 2 <= xs[i + 1]) {
        Test(xs[i]);
      }
    }
    if (res.empty()) {
      cout << -1 << '\n';
    } else {
      cout << res.size() << '\n';
      for (int i = 0; i < int(res.size()); i++) {
        cout << res[i] << " \n"[i == int(res.size()) - 1];
      }
    }
  }
  return 0;
}
