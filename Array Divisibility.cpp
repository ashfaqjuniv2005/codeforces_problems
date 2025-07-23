#include<bits/stdc++.h>
using namespace std;
 
 void newarray(int n,int result[]){
    for(int i=0;i<n;i++){
        result[i]=i+1;
    }
 }

int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    int t; cin>>t;
    while(t--){
     int n; cin>>n;
     int a[n];
     newarray(n,a);
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
     cout<<endl;
    }
   
    return 0;
}
