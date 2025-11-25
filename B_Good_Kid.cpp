/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 25-11-2025  22:17:37
   "Code like a poet. Debug like a pro." 		 GitHub  : https://github.com/vexlore-code
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
    int test;
    if (!(cin >> test))
        return 0;
    while (test--)
    {
        int n;
        if (!(cin >> n))
            return 0;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            if (!(cin >> v[i]))
                return 0;
        }
        sort(v.begin(), v.end());
        v[0]++;
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            ans *= v[i];
        }
        cout << ans << endl;        
    }

    return 0;
}