#include<bits/stdc++.h>
using namespace std;
int main()
 
{
 int n;
 cin>>n;
 char prev;
 cin>>prev;
 char curr;
 int count=0;
 for(int i=0;i<n-1;i++){// n-1 d we have already stored in prev
    cin>>curr;
    if(curr==prev){
        count++;
        prev=curr;
    }else{
        prev=curr;
    }

 }
 cout<<count;
    return 0;
}
