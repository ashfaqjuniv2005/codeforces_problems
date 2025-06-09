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
            bool srr(const pair<ll,ll>&a,const pair<ll,ll>&b){
                return a.sc<b.sc;
            }
            int main(){
              ios::sync_with_stdio(false);
                cin.tie(nullptr);
         ll t;
         cin>>t;
         vector<pair<ll,ll>>pr(t);
         for(int i=0;i<t;i++){
            ll x,y;
         cin>>pr[i].f>>pr[i].sc;
           
         }
         sort(pr.begin(),pr.end(),srr);
        
        bool f=0;
       
           
        for(int i=0;i<t-1;i++){
           if(pr[i].f>pr[i+1].f) {
           // cout<<pr[t-1].f<<" "<<pr[i].f<<endl;
            cout<<"Happy Alex";
            return 0;
           }
            
        }
    
        cout<<"Poor Alex"<<endl;
         




            }
			
