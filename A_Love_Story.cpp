/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 23-11-2025  02:07:28
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
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string main = "codeforces";
        int count = 0;
        for (char c = 0; c < main.length(); c++)
        {
            if (s[c] != main[c])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}