#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, m, count = 0;
    cin >> n >> m;
    while(n--)
    {
        int a;
        cin >> a;
        if (a > m)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}