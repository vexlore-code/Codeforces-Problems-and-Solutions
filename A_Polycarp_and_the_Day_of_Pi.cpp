/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 10-07-2025  23:45:50
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
    int t;
    cin >> t;
    while (t--)
    {
        string s, pi = "3141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067";
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == pi[i])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}