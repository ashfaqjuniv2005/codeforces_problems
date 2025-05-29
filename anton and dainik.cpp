#include <bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin>>m;
    string a;
    cin>>a;
    int aa=0,dd=0;

    for(int i=0;i<m;i++){
        if(a[i]=='A'){
            aa++;
        }
        else dd++;
    }
    
    if(aa>dd){
        cout<<"Anton";
    }
    else if(dd>aa){
        cout<<"Danik";
    }
    else
    { 
         cout<<"Friendship";
         
    }
return 0;
}
