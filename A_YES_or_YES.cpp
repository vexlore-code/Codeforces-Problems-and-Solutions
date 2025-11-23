/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 20-07-2025  22:40:33
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
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s == "YES" || s == "yes" || s == "Yes" || s == "YEs" || s == "yES" || s == "yeS" || s == "yEs" || s == "YeS")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}