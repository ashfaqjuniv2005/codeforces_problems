#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using i128 = __int128;
using u128 = unsigned __int128;

namespace ranges = std::ranges;
namespace views = std::views;

void solve() {
    int n;
    std::cin >> n;
    
    if (n % 2 == 0) {
        std::cout << -1 << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            std::cout << 2 * i % n + 1 << " \n"[i == n - 1];
        }
    }
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
