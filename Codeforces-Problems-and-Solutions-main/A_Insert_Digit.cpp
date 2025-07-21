/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 14-07-2025  23:27:59
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
    int count, n, k, d;
    cin >> count;
    while (count--)
    {
        int n, d;
        cin >> n >> d;
        int mark = 0;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] - '0' < d && mark == 0)
            {
                cout << d << s[i];
                mark = 1;
            }
            else
            {
                cout << s[i];
            }
        }
        if (mark == 0)
        {
            cout << d;
        }
        cout << endl;
    }
    return 0;
}