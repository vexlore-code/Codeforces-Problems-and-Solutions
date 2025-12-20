/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 24-11-2025  19:12:04
   "Code like a poet. Debug like a pro." 		 GitHub  : https://github.com/vexlore-code
*/

#include <bits/stdc++.h>
using namespace std;

#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define int long long
#define endl '\n'

const int MOD = 1e9 + 7, INF = 1e18, N = 2e5 + 5;

typedef vector<int> vi;

signed main()
{
    fastIO;
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int mx = v[0];
        for (int i = 1; i < n; i++)
            mx = max(mx, v[i]);
        cout << mx << endl;
    }

    return 0;
}
