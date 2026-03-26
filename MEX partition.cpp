// https://codeforces.com/contest/2160/problem/A


#include<bits/stdc++.h>
using namespace std;
#define ttc int t;cin>>t;while(t--)
#define ll long long
#define us unordered_set<int>


void solve(){
    int n,x,i=0;cin>>n;
    us ms;
    while(n--){
   cin>>x;
   ms.insert(x);}
   while(ms.count(i))
    i++;
   cout<<i<<"\n";
    
}

int main(){

  ttc solve();

    return 0;
}
