#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

bool isPrime(ll x)
{
    if (x < 2)
        return false;
    for (ll i = 2; i <= sqrtl(x); ++i)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        ll root = sqrtl(x);
        if (root * root == x && isPrime(root))
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
