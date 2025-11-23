/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 21-07-2025  12:49:14
   "Code like a poet. Debug like a pro." 		 GitHub  : https://github.com/vexlore-code
 ╚═══════════════════════════════════════╝
*/

#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

const int MOD = 1e9+7, INF = 1e18, N = 2e5+5;

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
        int n, m;
        cin >> n >> m;
        if (minimum(n, m) == 1)
        {
            cout << "NO" << endl;
        }
        else if (maximum(n, m) >= 3)
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