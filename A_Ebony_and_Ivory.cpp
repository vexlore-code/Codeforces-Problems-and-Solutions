/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 12-10-2025  22:56:51
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

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i <= c / a; i++)
    {
        int rem = c - a * i;
        if (rem % b == 0)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

signed main()
{
    fastIO;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}