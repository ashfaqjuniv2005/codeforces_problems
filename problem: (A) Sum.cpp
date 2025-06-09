#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int a,b,c,p;
    p=0;
    cin>>a>>b>>c;
    if(a+b==c){
        cout<<"YES"<<endl;
        p=1;
    }
    else if(a+c==b){
        cout<<"YES"<<endl;
        p=1;
    }
    else if(b+c==a){
        cout<<"YES"<<endl;
        p=1;
    }
    else if (p==0){
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
