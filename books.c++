#include<bits/stdc++.h>
using namespace std;
 
 
int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    int n,t; cin>>n>>t;
    int left=0,currsum=0,maxbooks=0;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        currsum+=a[i];
        while(currsum>t){
            currsum-=a[left];
            left++;
        }
        maxbooks=max(maxbooks,i-left+1);
    }
    cout << maxbooks << endl;

   
    return 0;
}
