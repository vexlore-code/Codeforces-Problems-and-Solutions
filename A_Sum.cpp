/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 05-07-2025  22:33:40
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
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vi r(3);
        for (int j = 0; j < 3; j++)
        {
            cin >> r[j];
        }

        sort(r.begin(), r.end());

        for (int j = 0; j < 3; j++)
        {
            if (r[0] + r[1] == r[2])
            {
                cout << "YES" << endl;
                break;
            }
            else
                cout << "NO" << endl;
            break;
        }
    }

    return 0;
}