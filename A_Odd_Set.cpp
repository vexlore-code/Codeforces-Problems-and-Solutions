/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 25-11-2025  23:50:37
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
    if (!(cin >> test))
        return 0;

    while (test--)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        n *= 2;
        for (int i = 0; i < n; i++)
        {
            int x;
            if (!(cin >> x))
                return 0;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == even)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}