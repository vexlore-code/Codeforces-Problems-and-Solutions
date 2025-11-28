/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 28-11-2025  11:05:15
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
        string s;
        cin >> s;

        int a = s[0] + s[1] + s[2];
        int b = s[3] + s[4] + s[5];

        cout << (a == b ? "YES\n" : "NO\n");
    }

    return 0;
}