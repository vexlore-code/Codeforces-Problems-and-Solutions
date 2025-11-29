/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 30-11-2025  04:19:13
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
    int n;
    cin >> n;

    if (n >= 0)
    {
        cout << n << endl;
        return 0;
    }

    int a = n / 10;                         
    int b = (n / 100) * 10 + (n % 10);    

    cout << max(n, max(a, b)) << endl;
    return 0;
}