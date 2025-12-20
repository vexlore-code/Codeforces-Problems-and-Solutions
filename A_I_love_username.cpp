/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 19-11-2025  02:33:45
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
    fastIO;
    int test, count = 0, maximum, minimum;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        if (i == 0)
        {
            minimum = n;
            maximum = n;
        }
        else
        {
            if (n > maximum)
            {
                maximum = n;
                count++;
            }
            if (n < minimum)
            {
                minimum = n;
                count++;
            }
        }
    }
    cout << count << endl;
}