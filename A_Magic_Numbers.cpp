/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 28-11-2025  23:12:11
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
    string s;
    cin >> s;

    for (int i = 0; i < s.size();)
    {
        if (s.substr(i, 3) == "144")
            i += 3;
        else if (s.substr(i, 2) == "14")
            i += 2;
        else if (s[i] == '1')
            i += 1;
        else
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}