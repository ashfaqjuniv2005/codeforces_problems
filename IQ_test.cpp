// Problem Link= https://codeforces.com/contest/25/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rip1(i,a,b) for(int i=a;i<b;i++)
#define rip2(i,a,b) for(int i=a;i<=b;i++)
#define rip3(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
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
#define Yes cout << "Yes"<< endl; 
#define No cout <<"No"<< endl;
#define yes cout <<"YES"<< endl;
#define no cout <<"NO"<< endl;
  
int main()
{
 fio;
    
   int n,i,a[3],b,c[3];
    cin>>n;
    for(i = 1; i <= n; i++){
        cin >> b;
        a[b % 2] = i;
        c[b % 2]++;
    }
    if(c[0] == 1) cout << a[0];
    else cout << a[1];
    return 0;
}
