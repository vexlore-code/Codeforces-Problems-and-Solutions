#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x = 0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
            x++;
        else
            x--;
    }
    cout << x << endl;
    return 0;
}
