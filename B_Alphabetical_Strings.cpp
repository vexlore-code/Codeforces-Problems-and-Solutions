/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 10-08-2025  23:09:01
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

typedef vector<int>    vi;
typedef pair<int, int> pii;
typedef vector<pii>    vpi;
/*
 ═══════════════════════════════════ MAIN CODE ═══════════════════════════════════
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() 
{
    fastIO;
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        int l = 0, r = s.size() - 1;
        bool ok = 1;
        char cur = 'a' + s.size() - 1; 

        while (l <= r) 
        {
            if (s[l] == cur) l++;
            else if (s[r] == cur) r--;
            else { ok = 0; break; }
            cur--;
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
}