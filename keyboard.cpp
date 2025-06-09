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
            char ch;
            cin>>ch;
            string s;
            cin>>s;
            if(ch=='R'){
                for(int i=0;i<s.length();i++){
                    if(s[i]=='s') cout<<'a';
                    if(s[i]=='q') cout<<'q';
                    if(s[i]=='w') cout<<'q';
                    if(s[i]=='e') cout<<'w';
                    if(s[i]=='r') cout<<'e';
                    if(s[i]=='t') cout<<'r';
                    if(s[i]=='y') cout<<'t';
                    if(s[i]=='u') cout<<'y';
                    if(s[i]=='i') cout<<'u';
                    if(s[i]=='o') cout<<'i';
                    if(s[i]=='p') cout<<'o';
                    if(s[i]=='a') cout<<'a';
                    if(s[i]=='d') cout<<'s';
                    if(s[i]=='f') cout<<'d';
                    if(s[i]=='g') cout<<'f';
                    if(s[i]=='h') cout<<'g';
                    if(s[i]=='j') cout<<'h';
                    if(s[i]=='k') cout<<'j';
                    if(s[i]=='l') cout<<'k';
                    if(s[i]==';') cout<<'l';
                    if(s[i]=='z') cout<<';';
                    if(s[i]=='x') cout<<'z';
                    if(s[i]=='c') cout<<'x';
                    if(s[i]=='v') cout<<'c';
                    if(s[i]=='b') cout<<'v';
                    if(s[i]=='n') cout<<'b';
                    if(s[i]=='m') cout<<'n';
                    if(s[i]==',') cout<<'m';
                    if(s[i]=='.') cout<<',';
                    if(s[i]=='/') cout<<'.';
                }
            }
       if(ch=='L'){
                for(int i=0;i<s.length();i++){
                    if(s[i]=='s') cout<<'d';
                    if(s[i]=='q') cout<<'w';
                    if(s[i]=='w') cout<<'e';
                    if(s[i]=='e') cout<<'r';
                    if(s[i]=='r') cout<<'t';
                    if(s[i]=='t') cout<<'y';
                    if(s[i]=='y') cout<<'u';
                    if(s[i]=='u') cout<<'i';
                    if(s[i]=='i') cout<<'o';
                    if(s[i]=='o') cout<<'p';
                    if(s[i]=='p') cout<<'p';
                    if(s[i]=='a') cout<<'s';
                    if(s[i]=='d') cout<<'f';
                    if(s[i]=='f') cout<<'g';
                    if(s[i]=='g') cout<<'h';
                    if(s[i]=='h') cout<<'j';
                    if(s[i]=='j') cout<<'k';
                    if(s[i]=='k') cout<<'l';
                    if(s[i]=='l') cout<<';';
                    if(s[i]==';') cout<<';';
                    if(s[i]=='z') cout<<'x';
                    if(s[i]=='x') cout<<'c';
                    if(s[i]=='c') cout<<'v';
                    if(s[i]=='v') cout<<'b';
                    if(s[i]=='b') cout<<'n';
                    if(s[i]=='n') cout<<'m';
                    if(s[i]=='m') cout<<',';
                    if(s[i]==',') cout<<'.';
                    if(s[i]=='.') cout<<'/';
                    //if(s[i]=='/') cout<<'.';
                }
            }

            }
