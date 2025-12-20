/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 19-11-2025  03:36:14
   "Code like a poet. Debug like a pro." 		 GitHub  : https://github.com/vexlore-code
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

signed main()
{
    fastIO;
    int n, t, ans = 0;
    cin >> n >> t;
    int left_time = 240 - t;
    for (int i = 1; i <= n; i++)
    {
        int time = 5 * i;
        if (ans + time <= left_time)
        {
            ans += time;
        }
        else
        {
            cout << i - 1 << endl;
            return 0;
        }
    }
    cout << n << endl;

    return 0;
}