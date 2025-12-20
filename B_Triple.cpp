/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 13-12-2025  19:25:10
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<int, int> freq;
        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
            if (freq[x] == 3)
                ans = x;
        }
        cout << ans << endl;
    }
    return 0;
}