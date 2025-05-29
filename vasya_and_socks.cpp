#include<bits/stdc++.h>
            using namespace std;
            #define tt int t;cin>>t;while(t--)
            #define itr(i,a) for(int i=0;i<a;i++)
            #define yes cout<<"YES"<<endl
            #define no cout<<"NO"<<endl
            #define ll long long
            #define endd cout<<endl
            #define vc(v, n) vector<ll> v(n)  
            #define srt(v) sort(v.begin(), v.end())
            #define f first
            #define sc second
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
            ll n,m;
            cin>>n>>m;
            ll tot=(n/m)*m;
            bool f=0;
        
            while(n>=m){
                f=1;
                
                n=n/m+n%m;
                tot+=(n/m)*m;

            } tot+=n;
            
          
            cout<<tot<<endl;


            }
