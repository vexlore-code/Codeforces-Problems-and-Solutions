/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦                  Created  : 17-12-2025  20:09:40
   "Code like a poet. Debug like a pro."         GitHub  : https://github.com/vexlore-code
*/

#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

const int MOD = 1e9+7, INF = 1e18, N = 2e5+5;

typedef vector<int> vi;

signed main()
{
    fastIO;

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int Smin = INF, Smax = -INF;
        int Dmin = INF, Dmax = -INF;

        for (int i = 1; i <= n; i++) 
        {
            string s;
            cin >> s;
            for (int j = 1; j <= m; j++) 
            {
                if (s[j - 1] == '#') {
                    Smin = min(Smin, i + j);
                    Smax = max(Smax, i + j);
                    Dmin = min(Dmin, i - j);
                    Dmax = max(Dmax, i - j);
                }
            }
        }

        int row = (Smin + Smax + Dmin + Dmax) / 4;
        int col = (Smin + Smax - Dmin - Dmax) / 4;

        cout << row << " " << col << endl;
    }

    return 0;
}