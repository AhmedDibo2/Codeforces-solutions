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
int main()
{
    fast;
    tests
    {
        int n;
        cin >> n;
        int a[n];
        int c0 = 0;
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                c0++;
                m = max(m, c0);
            }
            else
            {
                c0 = 0;
            }
        }
        cout << m << endl;
    }
}