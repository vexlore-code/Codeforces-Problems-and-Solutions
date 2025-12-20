/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 20-11-2025  02:39:22
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
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= 10; i++)
    {
        int total_price = a * i;
        if (total_price % 10 == 0 || total_price % 10 == b)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}