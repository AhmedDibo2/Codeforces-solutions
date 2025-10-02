#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    fast;
	int t;
    cin >> t;
    while(t--) {
        string s;cin>>s;
        int nA=0,nB=0;
        for(char c:s){
            if(c=='A')nA++;
            else nB++;
        }
        cout<<(nA>nB?"A\n":"B\n");
    }
}