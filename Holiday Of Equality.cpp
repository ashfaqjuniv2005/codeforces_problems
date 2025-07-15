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

   
    int sum=0;
   for(int i=0;i<n-1;i++){
    sum+=(a[n-1]-a[i]);
   }
   cout<<sum;
    return 0;
}
