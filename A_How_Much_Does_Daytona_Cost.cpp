/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 11-12-2025  23:17:37
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
        int a, k;
        cin >> a >> k;
        vi v(a);
        for (int i = 0; i < a; i++)
            cin >> v[i];
        bool found = false;
        for (int i = 0; i < a; i++)
        {
            if (v[i] == k)
            {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}