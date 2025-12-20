/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 07-12-2025  22:38:15
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
        int k;
        cin >> k;

        int ans = 0;
        for (int i = 1; ; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                k--;
                if (k == 0)
                {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}