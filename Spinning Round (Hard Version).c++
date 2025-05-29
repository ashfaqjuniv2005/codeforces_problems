/*
source from Gennady Korotkevich
codeforces ID= tourist
*/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

template <typename T, typename F>
class SparseTable {
 public:
  int n;
  vector<vector<T>> mat;
  F func;

  SparseTable(const vector<T>& a, const F& f) : func(f) {
    n = static_cast<int>(a.size());
    int max_log = 32 - __builtin_clz(n);
    mat.resize(max_log);
    mat[0] = a;
    for (int j = 1; j < max_log; j++) {
      mat[j].resize(n - (1 << j) + 1);
      for (int i = 0; i <= n - (1 << j); i++) {
        mat[j][i] = func(mat[j - 1][i], mat[j - 1][i + (1 << (j - 1))]);
      }
    }
  }

  T get(int from, int to) const {
    assert(0 <= from && from <= to && to <= n - 1);
    int lg = 32 - __builtin_clz(to - from + 1) - 1;
    return func(mat[lg][from], mat[lg][to - (1 << lg) + 1]);
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> perm(n);
    for (int i = 0; i < n; i++) {
      cin >> perm[i];
      --perm[i];
    }
    string s;
    cin >> s;
    vector<int> cl(n);
    vector<int> cr(n);
    {
      vector<int> st;
      for (int i = 0; i < n; i++) {
        while (!st.empty() && perm[st.back()] < perm[i]) {
          st.pop_back();
        }
        cl[i] = (st.empty() ? -1 : st.back());
        st.push_back(i);
      }
    }
    {
      vector<int> st;
      for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && perm[st.back()] < perm[i]) {
          st.pop_back();
        }
        cr[i] = (st.empty() ? -1 : st.back());
        st.push_back(i);
      }
    }
    bool fail = false;
    for (int i = 0; i < n; i++) {
      if (perm[i] != n - 1) {
        if (s[i] == 'L' && cl[i] == -1) {
          fail = true;
        }
        if (s[i] == 'R' && cr[i] == -1) {
          fail = true;
        }
      }
    }
    if (fail) {
      cout << -1 << '\n';
      continue;
    }
    vector<int> initv(n);
    iota(initv.begin(), initv.end(), 0);
    SparseTable st(initv, [&](int i, int j) {
      return perm[i] > perm[j] ? i : j;
    });
    vector<int> pos(n);
    for (int i = 0; i < n; i++) {
      pos[perm[i]] = i;
    }
    const int inf = int(1e7);
    vector<int> fl(n, -inf);
    vector<int> fr(n, -inf);
    for (int val = n - 1; val >= 0; val--) {
      int v = pos[val];
      if (cl[v] != -1) {
        int x = v;
        int y = cl[v];
        if (s[v] != 'R') {
          fl[v] = max(fl[v], 1);
        }
        if (s[v] != 'L' && cr[v] != -1) {
          x = cr[v];
          if (perm[x] > perm[y]) {
            swap(x, y);
          }
          assert(cl[x] == y || cr[x] == y);
          fl[v] = max(fl[v], cl[x] == y ? fl[x] : fr[x]) + 1;
        }
      }
      if (cr[v] != -1) {
        int x = v;
        int y = cr[v];
        if (s[v] != 'L') {
          fr[v] = max(fr[v], 1);
        }
        if (s[v] != 'R' && cl[v] != -1) {
          x = cl[v];
          if (perm[x] > perm[y]) {
            swap(x, y);
          }
          assert(cl[x] == y || cr[x] == y);
          fr[v] = max(fr[v], cl[x] == y ? fl[x] : fr[x]) + 1;
        }
      }
    }
    vector<int> h(n, -1);
    vector<int> init(n, 0);
    int ans = 0;
    auto Dfs = [&](auto&& self, int from, int to) -> pair<int, int> {
      int idx = st.get(from, to);
      pair<int, int> gl = {-inf, 0};
      pair<int, int> gr = {0, -inf};
      if (from < idx) {
        gl = self(self, from, idx - 1);
        gl.second = max(gl.second, 0);
      }
      if (to > idx) {
        gr = self(self, idx + 1, to);
        gr.first = max(gr.first, 0);
      }
      ans = max(ans, gl.second + gr.first);
      if (cl[idx] != -1) {
        ans = max(ans, gl.first + gr.first + fl[idx]);
      }
      if (cr[idx] != -1) {
        ans = max(ans, gl.second + gr.second + fr[idx]);
      }
      if (cl[idx] != -1 && cr[idx] != -1) {
        int x = perm[cl[idx]];
        int y = perm[cr[idx]];
        int add = (x < y ? fr[cl[idx]] : fl[cr[idx]]);
        ans = max(ans, gl.first + gr.second + add);
      }
      pair<int, int> ret = {-inf, inf};
      if (cl[idx] != -1) {
        ret.first = gl.first;
        if (s[idx] != 'R') {
          ret.first = max(ret.first, max(gl.second, gr.first) + 1);
        }
      }
      if (cr[idx] != -1) {
        ret.second = gr.second;
        if (s[idx] != 'L') {
          ret.second = max(ret.second, max(gl.second, gr.first) + 1);
        }
      }
      return ret;
    };
    Dfs(Dfs, 0, n - 1);
    cout << ans << '\n';
  }
  return 0;
}
