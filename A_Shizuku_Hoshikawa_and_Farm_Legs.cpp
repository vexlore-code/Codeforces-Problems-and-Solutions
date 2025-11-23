/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 21-11-2025  20:04:30
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
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << 0 << endl;
        }
        else if (n == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << (n / 4) + 1 << endl;
        }
    }

    return 0;
}