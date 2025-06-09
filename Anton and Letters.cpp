#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    getline(cin,s);

    s.erase( remove(s.begin(), s.end(),','),s.end());
    s.erase( remove(s.begin(), s.end(),' '),s.end());
    s.erase( remove(s.begin(), s.end(),'{'),s.end());
    s.erase( remove(s.begin(), s.end(),'}'),s.end());




    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }

    sort(s.begin(),s.end());




    int a=0;


    int Size=s.size();
    for(int i=0;i<Size-1;i++){
        if(s[i]!=s[i+1]){
            a++;
        }
    }
    if(Size==0){
        cout<<0;
    }
    else cout<<a+1;

    }
