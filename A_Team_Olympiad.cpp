/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 02-07-2025  19:45:37
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
    vi a(n);
    vi one, two, three;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            one.push_back(i + 1);
        else if (a[i] == 2)
            two.push_back(i + 1);
        else if (a[i] == 3)
            three.push_back(i + 1);
    }

    int tc = min({one.size(), two.size(), three.size()});
    cout << tc << endl;
    for (int i = 0; i < tc; i++)
    {
        cout << one[i] << ' ' << two[i] << ' ' << three[i] << endl;
    }

    return 0;
}
