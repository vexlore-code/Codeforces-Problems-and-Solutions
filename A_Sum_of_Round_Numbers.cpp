/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 18-07-2025  19:07:18
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
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vi s;
        int p = 1;
        while (n > 0)
        {
            if (n % 10 > 0)
            {
                s.push_back((n % 10) * p);
            }
            n /= 10;
            p *= 10;
        }
        cout << s.size() << endl;
        for (auto c : s)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}