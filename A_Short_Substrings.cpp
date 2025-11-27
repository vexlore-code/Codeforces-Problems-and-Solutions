/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 27-11-2025  21:36:22
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
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        string s;
        cin >> s;

        int len = s.length();

        if (len == 2)
            cout << s << endl;
        else
        {
            string a;
            a += s[0];
            a += s[1];

            for (int i = 3; i < len; i += 2)
                a += s[i];

            cout << a << endl;
        }
    }
    return 0;
}