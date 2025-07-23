#include <bits/stdc++.h>
using namespace std;
#define fr for(int i=0;i<n;i++)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

int n; cin>>n;
vector<int>a(n);

int totalsum=0,sum1=0,cnt=0;
fr {
    cin>>a[i];
  totalsum+=a[i];
}
int half=totalsum/2;

sort(a.begin(),a.end());

for(int i=n-1;i>=0;i--){
    sum1+=a[i];
    cnt++;
    if(sum1>half){
        break;
    }
}
cout<<cnt<<endl;

    return 0;
}
