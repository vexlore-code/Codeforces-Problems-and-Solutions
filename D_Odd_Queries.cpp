/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 29-11-2025  23:51:20
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
        int n, q;
        cin >> n >> q;
        vi v(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        vi pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
            pref[i] = pref[i - 1] + v[i];

        while (q--)
        {
            int l, r, k;
            cin >> l >> r;
            cin >> k;
            int sum = pref[n];
            sum -= pref[r] - pref[l - 1];
            sum += (r - l + 1) * k;
            if (sum % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}