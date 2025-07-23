#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

bool is_lucky(int x)
{
    while (x > 0)
    {
        int d = x % 10;
        if (d != 4 && d != 7)
            return false;
        x /= 10;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    bool ok = false;
    for (int i = 1; i <= n; i++)
    {
        if (is_lucky(i) && n % i == 0)
        {
            ok = true;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
