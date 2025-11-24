/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 24-11-2025  19:34:10
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
    if (!(cin >> test)) return 0;
    while (test--)
    {
        int n;
        cin >> n;
        int count = 0;
        bool ok = true;
        while (n != 1)
        {
            if (n % 6 == 0)
            {
                n /= 6;
                count++;
            }
            else if (n % 3 == 0)
            {
                n *= 2;
                count++;
            }
            else
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << count << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}