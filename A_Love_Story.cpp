#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define tests \
    int t;    \
    cin >> t; \
    while (t--)
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    fast;
    tests
    {
        stack<char> st;
        string s;
        cin >> s;
        string cf = "codeforces";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != cf[i])
            {
                st.push(cf[i]);
            }
        }
        cout << st.size() << endl;
    }
}