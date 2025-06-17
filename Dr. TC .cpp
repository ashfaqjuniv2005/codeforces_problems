#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
  
    int t;
    cin>>t;
    while(t--){
              int n;
              cin>>n;
              string s;
              cin>>s;
              int count_1=0;
              for(char c:s ){
                        if(c=='1')
                        count_1++;
              }
              int total_ones=(n-count_1)+count_1*(n-1);
              cout<< total_ones <<endl;
    }
    return 0;
}
