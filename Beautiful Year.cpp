#include <bits/stdc++.h>
using namespace std;

int main(){
          
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    for(int i = n + 1; ; i++) {
        set<int> digs;
        int curr = i;
        int total = 0;
        while(curr > 0) {
            digs.insert(curr % 10);
            curr /= 10;
            total++;
        }
        if(digs.size() == total) {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
    
}
