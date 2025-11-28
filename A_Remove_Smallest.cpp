/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 27-11-2025  21:49:02
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
        if (!(cin >> n))
            return 0;
        vi a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
            
        sort(a.begin(), a.end());

        bool ok = true;
        for (int i = 1; i < n; i++)
            if (a[i] - a[i - 1] > 1)
            {
                cout << "NO" << endl;
                ok = false;
                break;
            }
        if (ok)
            cout << "YES" << endl;
    }
    return 0;
}