#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    for (int i = 0; i <= n; i++)
    {
        if (dp[i] == -1)
            continue;
        if (i + a <= n)
            dp[i + a] = max(dp[i + a], dp[i] + 1);
        if (i + b <= n)
            dp[i + b] = max(dp[i + b], dp[i] + 1);
        if (i + c <= n)
            dp[i + c] = max(dp[i + c], dp[i] + 1);
    }

    cout << dp[n] << endl;
    return 0;
}
