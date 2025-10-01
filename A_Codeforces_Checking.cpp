#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        char c;cin>>c;
        string s="codeforces";
        bool f=0;
        for(int i=0;i<s.size();i++){
            if(c==s[i]) f=1;
        }
        if (f==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}