/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 04-07-2025  21:06:10
   "Code like a poet. Debug like a pro." 		 GitHub  : https://github.com/vexlore-code
 ╚═══════════════════════════════════════╝
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
typedef pair<int, int> pii;
typedef vector<pii> vpi;
/*
 ═══════════════════════════════════ MAIN CODE ═══════════════════════════════════
*/
signed main()
{
    fastIO;
    int n, i, max = 1, k = 1, a[1000000];
    cin >> n;
    cin >> a[0];
    for (i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= a[i - 1])
            k++;
        else
            k = 1;
        if (k > max)
            max = k;
    }
    cout << max << endl;
 
    return 0;
}
