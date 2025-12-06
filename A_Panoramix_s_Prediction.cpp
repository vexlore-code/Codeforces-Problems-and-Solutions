/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 06-12-2025  20:33:47
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

bool PrimeNumber(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

signed main()
{
    fastIO;
    int a, b;
    cin >> a >> b;

    int nxtprm = a + 1;
    while (!PrimeNumber(nxtprm))
        nxtprm++;

    if (nxtprm == b)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}