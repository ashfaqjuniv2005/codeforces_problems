//collected from tourist

#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        map<char,int>freq;
        char ans;
        int found=0;
        if(n==1)
        {
            cout<<"-1\n";
            continue;
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                ans=s[i];
                found=1;
                break;
            }
        }
        
       if(found)
       {
        cout<<ans<<ans<<endl;
        continue;
       }
       if(n==2)
       {
        cout<<"-1\n";
        continue;
       }
       for(int i=2;i<n;i++)
       {
        if(s[i] != s[i-1] && s[i-1]!=s[i-2] && s[i]!=s[i-2])
        {
            cout<<s[i-2]<<s[i-1]<<s[i]<<endl;
         break;
        }
       }int count=0;
       for(int i=0;i<n-2;i++)
       {
        if(s[i]==s[i+2]){
            count++;
        }
       }
       if(count==n-2)
       {
        cout<<"-1\n";
       }
       


    }
}
