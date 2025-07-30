/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 15-07-2025  16:00:49
   "Code like a poet. Debug like a pro." 		 GitHub  : https://github.com/vexlore-code
 ╚═══════════════════════════════════════╝
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
typedef pair<int, int> pii;
typedef vector<pii> vpi;
/*
 ═══════════════════════════════════ MAIN CODE ═══════════════════════════════════
*/
signed main()
{
    fastIO;
    int test, n;
    cin >> test;
    while (test--)
    {
        cin >> n;
        vi v(n);
        int mn = INT32_MAX;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mn = min(v[i], mn);
        }
        for (int i = 0; i < n; i++)
        {
            count += v[i] - mn;
        }
        cout << count << endl;
    }
    return 0;
}