#include<bits/stdc++.h>
using namespace std;
 
 
int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int n; cin>>n;
vector<int>a(n);

for(int i=0;i<n;i++) cin>>a[i];

sort(a.begin(),a.end());

if(n%2==0){
    cout<<a[(n/2)-1];
}
else cout<<a[(n-1)/2];

return 0;

}
