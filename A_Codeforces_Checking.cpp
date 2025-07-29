/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦         	   		Created	 : 29-07-2025  11:27:45
   "Code like a poet. Debug like a pro." 		 GitHub  : https://github.com/vexlore-code
 ╚═══════════════════════════════════════╝
*/

#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

const int MOD = 1e9+7, INF = 1e18, N = 2e5+5;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
/*
 ═══════════════════════════════════ MAIN CODE ═══════════════════════════════════ 
*/
signed main()
{
    fastIO;
    int n;
    cin >> n;
    while (n--)
    {
        char ch;
        cin >> ch;
        if (ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'o' || ch == 'r' || ch == 'c' || ch == 'e' || ch == 's')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    } 

    return 0;
}