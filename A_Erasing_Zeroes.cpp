/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 14-07-2025  18:48:01
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
    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        string s;
        cin >> s;
        int f = s.find('1') + 1;
        int l = s.rfind('1');

        int cnt = 0;
        for (int i = f; i < l; i++)
        {
            if (s[i] == '0')
                cnt++;
        }
 
        cout << cnt << endl; 
    }

    return 0;
}