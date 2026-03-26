//  https://codeforces.com/contest/1657/problem/B

#include<bits/stdc++.h>
using namespace std;
 
 
int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    int t;cin>>t;
    while (t--)
    {
       
         long long n, B, x, y;
        cin >> n >> B >> x >> y;
        
        long long sum = 0;
        long long a = 0;
        
        for (long long i = 0; i <= n; ++i) {
            sum += a;
            if (i == n) break;
            
            if (a + x <= B) {
                a += x;
            } else {
                a -= y;
            }
        }
        
        cout << sum << '\n';
    }
    
   
    return 0;
}
