/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 26-11-2025  22:38:11
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
        int n[4];
        for (int i = 0; i < 4; i++)
            if (!(cin >> n[i]))
                return 0;
        int ans = 0;
        for (int i = 1; i < 4; i++)
            ans += n[i] > n[0];
        cout << ans << endl;
    }

    return 0;
}