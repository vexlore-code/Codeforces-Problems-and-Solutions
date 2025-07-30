/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 30-07-2025  21:47:24
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
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int result;
        cin >> result;
        if (result < 1400)
            cout << "Division 4" << endl;
        else if (result < 1600)
            cout << "Division 3" << endl;
        else if (result < 1900)
            cout << "Division 2" << endl;
        else
            cout << "Division 1" << endl;            
    }
    return 0;
}