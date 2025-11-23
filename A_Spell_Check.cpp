/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 23-11-2025  01:57:01
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (s == "Timru")
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