#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, b = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            char c; cin >> c;
            if(c == 'P') a += 1;
            if(c == 'N') a += 3;
            if(c == 'B') a += 3;
            if(c == 'R') a += 5;
            if(c == 'Q') a += 9;

            if(c == 'p') b += 1;
            if(c == 'n') b += 3;
            if(c == 'b') b += 3;
            if(c == 'r') b += 5;
            if(c == 'q') b += 9;
        }
    }
    cout << (a == b ? "Draw" : (a > b ? "White" : "Black"));
}
