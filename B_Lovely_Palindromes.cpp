/*
===================================
                 _
 __   _______  _| | ___  _ __ ___
 \ \ / / _ \ \/ / |/ _ \| '__/ _ \    Created     : 2025-06-15  02:37:52
  \ V /  __/>  <| | (_) | | |  __/
   \_/ \___/_/\_\_|\___/|_|  \___|    GitHub      : https://github.com/vexlore-code

            v e x l o r e
===================================
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

/*	╔═══════════════╗
    ~~~ MAIN CODE ~~~
    ╚═══════════════╝  */

signed main()
{
    fastIO;
    string s1;
    cin >> s1;
    string s2 = string(s1.rbegin(), s1.rend());

    cout << s1 << s2 << endl;

    return 0;
}

/*
┌─────────────────────────────────────────────┐
│ "Code like a poet, debug like a detective." │
│ "Crafted with passion and precision."       │
│ "Every submission is a story of learning."  │
│                   ◉‿◉                       │
└─────────────────────────────────────────────┘
*/