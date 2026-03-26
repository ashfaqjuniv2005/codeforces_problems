// https://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define fo2(i,a,b) for(int i=a;i<b;i++)
#define fo3(i,a,b) for(int i=a;i>=b;i--)
#define fo4(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<int>
#define vll vector<long long>
#define tt int t;cin>>t;while(t--)
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ppb pop_back
#define mii map<int,int>
#define mll map<long long,long long>   
#define empb emplace_back
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>  


int main () {
    int n;
    cin >> n;
    vi cards;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        cards.push_back(x);
    }
    int firstIndex = 0, lastIndex = n - 1;
    int sereja = 0, dima = 0;
    bool move = true;

    while (lastIndex - firstIndex + 1 != 0) {
     
        if (move == true) {
            if (cards[firstIndex] > cards[lastIndex]) {
                sereja += cards[firstIndex];
                firstIndex++;
            }
            else {
                sereja += cards[lastIndex];
                lastIndex--;
            }
            move = false;
        }
        else {
            if (cards[firstIndex] > cards[lastIndex]) {
                dima += cards[firstIndex];
                firstIndex++;
            }
            else {
                dima += cards[lastIndex];
                lastIndex--;
            }
            move = true;
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
