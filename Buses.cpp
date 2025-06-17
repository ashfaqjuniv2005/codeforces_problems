//source from tourist

#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

template <typename T>
T inverse(T a, T m) {
  T u = 0, v = 1;
  while (a != 0) {
    T t = m / a;
    m -= t * a; swap(a, m);
    u -= t * v; swap(u, v);
  }
  assert(m == 1);
  return u;
}

template <typename T>
class Modular {
 public:
  using Type = typename decay<decltype(T::value)>::type;

  constexpr Modular() : value() {}
  template <typename U>
  Modular(const U& x) {
    value = normalize(x);
  }

  template <typename U>
  static Type normalize(const U& x) {
    Type v;
    if (-mod() <= x && x < mod()) v = static_cast<Type>(x);
    else v = static_cast<Type>(x % mod());
    if (v < 0) v += mod();
    return v;
  }

  const Type& operator()() const { return value; }
  template <typename U>
  explicit operator U() const { return static_cast<U>(value); }
  constexpr static Type mod() { return T::value; }

  Modular& operator+=(const Modular& other) { if ((value += other.value) >= mod()) value -= mod(); return *this; }
  Modular& operator-=(const Modular& other) { if ((value -= other.value) < 0) value += mod(); return *this; }
  template <typename U> Modular& operator+=(const U& other) { return *this += Modular(other); }
  template <typename U> Modular& operator-=(const U& other) { return *this -= Modular(other); }
  Modular& operator++() { return *this += 1; }
  Modular& operator--() { return *this -= 1; }
  Modular operator++(int) { Modular result(*this); *this += 1; return result; }
  Modular operator--(int) { Modular result(*this); *this -= 1; return result; }
  Modular operator-() const { return Modular(-value); }

  template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, int>::value, Modular>::type& operator*=(const Modular& rhs) {
    value = normalize(static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value));
    return *this;
  }
  template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) {
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  }
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) {
    value = normalize(value * rhs.value);
    return *this;
  }

  Modular& operator/=(const Modular& other) { return *this *= Modular(inverse(other.value, mod())); }

  friend const Type& abs(const Modular& x) { return x.value; }

  template <typename U>
  friend bool operator==(const Modular<U>& lhs, const Modular<U>& rhs);

  template <typename U>
  friend bool operator<(const Modular<U>& lhs, const Modular<U>& rhs);

  template <typename V, typename U>
  friend V& operator>>(V& stream, Modular<U>& number);

 private:
  Type value;
};

template <typename T> bool operator==(const Modular<T>& lhs, const Modular<T>& rhs) { return lhs.value == rhs.value; }
template <typename T, typename U> bool operator==(const Modular<T>& lhs, U rhs) { return lhs == Modular<T>(rhs); }
template <typename T, typename U> bool operator==(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) == rhs; }

template <typename T> bool operator!=(const Modular<T>& lhs, const Modular<T>& rhs) { return !(lhs == rhs); }
template <typename T, typename U> bool operator!=(const Modular<T>& lhs, U rhs) { return !(lhs == rhs); }
template <typename T, typename U> bool operator!=(U lhs, const Modular<T>& rhs) { return !(lhs == rhs); }

template <typename T> bool operator<(const Modular<T>& lhs, const Modular<T>& rhs) { return lhs.value < rhs.value; }

template <typename T> Modular<T> operator+(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) += rhs; }
template <typename T, typename U> Modular<T> operator+(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) += rhs; }
template <typename T, typename U> Modular<T> operator+(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) += rhs; }

template <typename T> Modular<T> operator-(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T, typename U> Modular<T> operator-(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T, typename U> Modular<T> operator-(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) -= rhs; }

template <typename T> Modular<T> operator*(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T, typename U> Modular<T> operator*(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T, typename U> Modular<T> operator*(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) *= rhs; }

template <typename T> Modular<T> operator/(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) /= rhs; }
template <typename T, typename U> Modular<T> operator/(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) /= rhs; }
template <typename T, typename U> Modular<T> operator/(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) /= rhs; }

template<typename T, typename U>
Modular<T> power(const Modular<T>& a, const U& b) {
  assert(b >= 0);
  Modular<T> x = a, res = 1;
  U p = b;
  while (p > 0) {
    if (p & 1) res *= x;
    x *= x;
    p >>= 1;
  }
  return res;
}

template <typename T>
bool IsZero(const Modular<T>& number) {
  return number() == 0;
}

template <typename T>
string to_string(const Modular<T>& number) {
  return to_string(number());
}

// U == std::ostream? but done this way because of fastoutput
template <typename U, typename T>
U& operator<<(U& stream, const Modular<T>& number) {
  return stream << number();
}

// U == std::istream? but done this way because of fastinput
template <typename U, typename T>
U& operator>>(U& stream, Modular<T>& number) {
  typename common_type<typename Modular<T>::Type, long long>::type x;
  stream >> x;
  number.value = Modular<T>::normalize(x);
  return stream;
}

// using ModType = int;

// struct VarMod { static ModType value; };
// ModType VarMod::value;
// ModType& md = VarMod::value;
// using Mint = Modular<VarMod>;

constexpr int md = int(1e9) + 7;
using Mint = Modular<std::integral_constant<decay<decltype(md)>::type, md>>;

// vector<Mint> fact(1, 1);
// vector<Mint> inv_fact(1, 1);

// Mint C(int n, int k) {
//   if (k < 0 || k > n) {
//     return 0;
//   }
//   while ((int) fact.size() < n + 1) {
//     fact.push_back(fact.back() * (int) fact.size());
//     inv_fact.push_back(1 / fact.back());
//   }
//   return fact[n] * inv_fact[k] * inv_fact[n - k];
// }

template <typename Info, typename Index = int, bool Persistent = false>
class DynamicSimpleSegmentTree {
 public:
  struct Node {
    array<int, 2> c;
    Info d;
  };

  Index n;
  vector<Node> nodes;

  DynamicSimpleSegmentTree() : DynamicSimpleSegmentTree(0, 0) {}
  DynamicSimpleSegmentTree(Index n_) : DynamicSimpleSegmentTree(n_, 0) {}
  DynamicSimpleSegmentTree(Index n_, int q) : n(n_) {
    if (q > 0) {
      nodes.reserve(2 + q * bit_width(make_unsigned_t<Index>(2 * n - 1)));
    }
    nodes.resize(2);
    nodes[1] = {{-1, -1}, Info::GetDefault(0, n)};
  }

  int SetImpl(int root, Index p, const Info& v, Index nl, Index nr) {
    int me;
    if (root == -1) {
      me = int(nodes.size());
      nodes.push_back({{-1, -1}, Info::GetDefault(nl, nr)});
    } else {
      if (Persistent) {
        me = int(nodes.size());
        nodes.push_back(nodes[root]);
      } else {
        me = root;
      }
    }
    if (nr - nl == 1) {
      nodes[me].d = v;
    } else {
      Index mid = (nl + nr) >> 1;
      if (p < mid) {
        int got = SetImpl(nodes[me].c[0], p, v, nl, mid);
        nodes[me].c[0] = got;
      } else {
        int got = SetImpl(nodes[me].c[1], p, v, mid, nr);
        nodes[me].c[1] = got;
      }
      auto lft = nodes[me].c[0] == -1 ? Info::GetDefault(nl, mid) : nodes[nodes[me].c[0]].d;
      auto rgt = nodes[me].c[1] == -1 ? Info::GetDefault(mid, nr) : nodes[nodes[me].c[1]].d;
      nodes[me].d = lft.Unite(rgt);
    }
    return me;
  }

  int Set(Index p, const Info& v, int root = Persistent ? -1 : 1) {
    assert(0 <= p && p < n && root >= 1);
    return SetImpl(root, p, v, 0, n);
  }

  Info QueryImpl(int root, Index l, Index r, Index nl, Index nr) {
    if (root == -1) {
      return Info::GetDefault(max(l, nl), min(r, nr));
    }
    if (l <= nl && nr <= r) {
      return nodes[root].d;
    }
    Index mid = (nl + nr) >> 1;
    auto lft = l < mid ? QueryImpl(nodes[root].c[0], l, r, nl, mid) : Info();
    auto rgt = r > mid ? QueryImpl(nodes[root].c[1], l, r, mid, nr) : Info();
    return lft.Unite(rgt);
  }

  Info Query(Index l, Index r, int root = Persistent ? -1 : 1) {
    assert(0 <= l && l <= r && r <= n && root >= 1);
    if (l == r) {
      return Info();
    }
    return QueryImpl(root, l, r, 0, n);
  }

  Info Get(Index p, int root = Persistent ? -1 : 1) {
    assert(0 <= p && p < n && root >= 1);
    Index nl = 0;
    Index nr = n;
    while (nr - nl > 1 && root != -1) {
      Index mid = (nl + nr) >> 1;
      if (p < mid) {
        root = nodes[root].c[0];
        nr = mid;
      } else {
        root = nodes[root].c[1];
        nl = mid;
      }
    }
    return root == -1 ? Info::GetDefault(p, p + 1) : nodes[root].d;
  }

  template<int N, typename F>
  Index MaxRight(array<int, N> roots, Index l, F f) {
    assert(0 <= l && l <= n);
    if (l == n) {
      return n;
    }
    Index res = n;
    array<Info, N> sums;
    for (int i = 0; i < N; i++) {
      sums[i] = Info();
    }
    array<Info, N> new_sums;
    auto Dfs = [&](auto&& self, array<int, N> v, Index nl, Index nr) -> void {
      if (res != n) {
        return;
      }
      array<int, N> to;
      if (nl < l) {
        Index mid = (nl + nr) >> 1;
        if (l < mid) {
          for (int i = 0; i < N; i++) {
            to[i] = v[i] == -1 ? -1 : nodes[v[i]].c[0];
          }
          self(self, to, nl, mid);
          if (res != n) {
            return;
          }
        }
        for (int i = 0; i < N; i++) {
          to[i] = v[i] == -1 ? -1 : nodes[v[i]].c[1];
        }
        self(self, to, mid, nr);
        return;
      }
      for (int i = 0; i < N; i++) {
        new_sums[i] = sums[i].Unite(v[i] == -1 ? Info::GetDefault(nl, nr) : nodes[v[i]].d);
      }
      if (f(new_sums)) {
        sums = new_sums;
        return;
      }
      while (nr - nl > 1) {
        Index mid = (nl + nr) >> 1;
        for (int i = 0; i < N; i++) {
          new_sums[i] = sums[i].Unite(v[i] == -1 || nodes[v[i]].c[0] == -1 ? Info::GetDefault(nl, mid) : nodes[nodes[v[i]].c[0]].d);
        }
        if (f(new_sums)) {
          sums = new_sums;
          nl = mid;
          for (int i = 0; i < N; i++) {
            v[i] = v[i] == -1 ? -1 : nodes[v[i]].c[1];
          }
        } else {
          nr = mid;
          for (int i = 0; i < N; i++) {
            v[i] = v[i] == -1 ? -1 : nodes[v[i]].c[0];
          }
        }
      }
      res = nl;
    };
    Dfs(Dfs, roots, 0, n);
    return res;
  }

  template<int N, typename F>
  Index MinLeft(array<int, N> roots, Index r, F f) {
    assert(0 <= r && r <= n);
    if (r == 0) {
      return 0;
    }
    Index res = 0;
    array<Info, N> sums;
    for (int i = 0; i < N; i++) {
      sums[i] = Info();
    }
    array<Info, N> new_sums;
    auto Dfs = [&](auto&& self, array<int, N> v, Index nl, Index nr) -> void {
      if (res != 0) {
        return;
      }
      array<int, N> to;
      if (nr > r) {
        Index mid = (nl + nr) >> 1;
        if (r > mid) {
          for (int i = 0; i < N; i++) {
            to[i] = v[i] == -1 ? -1 : nodes[v[i]].c[1];
          }
          self(self, to, mid, nr);
          if (res != 0) {
            return;
          }
        }
        for (int i = 0; i < N; i++) {
          to[i] = v[i] == -1 ? -1 : nodes[v[i]].c[0];
        }
        self(self, to, nl, mid);
        return;
      }
      for (int i = 0; i < N; i++) {
        new_sums[i] = (v[i] == -1 ? Info::GetDefault(nl, nr) : nodes[v[i]].d).Unite(sums[i]);
      }
      if (f(new_sums)) {
        sums = new_sums;
        return;
      }
      while (nr - nl > 1) {
        Index mid = (nl + nr) >> 1;
        for (int i = 0; i < N; i++) {
          new_sums[i] = (v[i] == -1 || nodes[v[i]].c[1] == -1 ? Info::GetDefault(mid, nr) : nodes[nodes[v[i]].c[1]].d).Unite(sums[i]);
        }
        if (f(new_sums)) {
          sums = new_sums;
          nr = mid;
          for (int i = 0; i < N; i++) {
            v[i] = v[i] == -1 ? -1 : nodes[v[i]].c[0];
          }
        } else {
          nl = mid;
          for (int i = 0; i < N; i++) {
            v[i] = v[i] == -1 ? -1 : nodes[v[i]].c[1];
          }
        }
      }
      res = nr;
    };
    Dfs(Dfs, roots, 0, n);
    return res;
  }
};

struct Info {
  Mint sum = 0;

  Info Unite(Info b) const {
    Info res;
    res.sum = sum + b.sum;
    return res;
  }

  static Info GetDefault(int64_t, int64_t) {
    return Info();
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> a(m);
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    a[i] = {y, x};
  }
  sort(a.begin(), a.end());
  DynamicSimpleSegmentTree<Info> st(n + 1, m + 1);
  st.Set(0, {1});
  for (auto& [y, x] : a) {
    st.Set(y, st.Query(x, y + 1));
  }
  cout << st.Get(n).sum << '\n';
  return 0;
}
