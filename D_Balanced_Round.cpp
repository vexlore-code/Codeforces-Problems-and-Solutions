/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 29-11-2025  22:16:37
   "Code like a poet. Debug like a pro." 		 GitHub  : https://github.com/vexlore-code
*/

#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

const int MOD = 1e9+7, INF = 1e18, N = 2e5+5;

typedef vector<int> vi;

void solve()
{
    int n, k;
    cin >> n >> k;
    vi v;
    vi diff;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    if (v.size() == 1)
    {
        cout << 0 << endl;
        return;
    }

    sort(v.begin(), v.end());

    int ans = 1, count = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] <= k)
            count++;
        else
            count = 1;
        ans = max(ans, count);
    }
    cout << n - ans << endl;
}

signed main()
{
    fastIO;
    int test;
    if (!(cin >> test))
        return 0;
    while (test--)
        solve();

    return 0;
}