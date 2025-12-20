/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 03-12-2025  20:43:21
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
    int a, count0 = 0, count1 = 0; cin >> a;
    string b; cin >> b;
    for (char c : b)
        if (c == '0')
            count0++;
        else
            count1++;
    int diff = abs(count0 - count1);
    cout << diff << endl;

    return 0;
}