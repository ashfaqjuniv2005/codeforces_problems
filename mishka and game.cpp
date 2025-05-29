#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int aa=0,bb=0;
    for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
        }
    
    
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            aa++;
        }
        else if(a[i]<b[i]){
            bb++;
        }
    }

    
    if(aa>bb){
        cout<<"Mishka";
    }
    else if(aa==bb){
        cout<<"Friendship is magic!^^";
    }
    else cout<<"Chris";
    
    
}
