#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

void solve() {
    i64 l, r, g;
    std::cin >> l >> r >> g;
    l = (l + g - 1) / g;
    r /= g;
    
    for (i64 d = r - l; d >= 0; d--) {
        for (i64 a = l; a + d <= r; a++) {
            i64 b = a + d;
            if (std::gcd(a, b) == 1) {
                std::cout << a * g << " " << b * g << "\n";
                return;
            }
        }
    }
    std::cout << -1 << " " << -1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
