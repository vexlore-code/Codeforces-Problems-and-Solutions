/*
 "La Ilaha Illallah Muhammadur Rasulullah"
             ✦ v e x l o r e ✦         	   		Created	 : 01-12-2025  23:11:34
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
    int n, m;
    cin >> n >> m;
    vi prices(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());
    int totalCost = 0;
    for(int i = 0; i < min(n, m); i++) 
    {
        if(prices[i] < 0) 
        {
            totalCost += prices[i];
        } 
        else 
        {
            break;
        }
    }
    cout << -totalCost << endl;

    return 0;
}