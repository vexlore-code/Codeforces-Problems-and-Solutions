/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 10-12-2025  19:41:08
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
    int test;
    cin >> test;
    while (test--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int k = n - (n - y) % x;
        cout << k << endl;
    }

    return 0;
}