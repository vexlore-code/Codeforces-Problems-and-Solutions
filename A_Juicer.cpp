/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 16-12-2025  20:58:36
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
    int n, b, d;
    cin >> n >> b >> d;
    vi v(n);
    int cnt = 0;
    for(int i = 0; i < n; i++) cin >> v[i];
    int curr = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] <= b)
        {
            curr += v[i];
            if(curr > d)
            {
                cnt++;
                curr = 0;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}