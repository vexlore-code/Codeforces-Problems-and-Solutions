/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 10-08-2025  23:20:03
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

typedef vector<int>    vi;
typedef pair<int, int> pii;
typedef vector<pii>    vpi;
/*
 ═══════════════════════════════════ MAIN CODE ═══════════════════════════════════
*/
void solve()
{
    string s;
    cin >> s;
    string t;
    while (t.size() < s.size() + 3)
        t += "Yes";
    for (int i = 0; i < 3; i++)
    {
        if (s == t.substr(i, s.size()))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

signed main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
        solve();
}