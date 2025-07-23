
#include<bits/stdc++.h>
using namespace std;
int main()
{
          ios_base::sync_with_stdio(false);
          cin.tie(0);
          cout.tie(0);
          
          int n,maximum=0; cin>>n;
          char c,last;
          string maximums,curr;
          unordered_map<string,int>check;
          for(int i=0;i<n;i++){
                    cin>>c;
                    if(i){
                              curr="";
                              curr+=last;
                              curr+=c;
                              check[curr]++;
                              if(check[curr]>maximum){
                                        maximums=curr;
                                        maximum=check[curr];
                              }
                    }
                    last=c;
          }
         cout << maximums<<endl;
          return 0;
}
