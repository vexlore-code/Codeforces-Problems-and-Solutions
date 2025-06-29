/*
    "La Ilaha Illallah Muhammadur Rasulullah"
       ===================================
                        _
       __   _______  _ | | ___  _ __ ___
        \ \ / / _ \ \/ / |/ _ \| '__/ _ \    Created   : 29-06-2025  20:18:02
         \ V /  __/>  <| | (_) | | |  __/
          \_/ \___/_/\_\_|\___/|_|  \___|    GitHub    : https://github.com/vexlore-code
                        ✦
                   v e x l o r e
       ===================================
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
typedef pair<int, int> pii;
typedef vector<pii> vpi;

/*~~~ MAIN CODE ~~~*/

signed main()
{
    fastIO;

    int n, test, i;
    cin >> n >> test;
    vi a(test), d;

    for (i = 0; i < test; i++)
    {
        cin >> a[i];
    }

    /*     int mn = *min_element(a.begin(), a.begin() + n);
        int mx = *max_element(a.begin(), a.begin() + n);

        cout << mx - mn << endl; */

    for (int i = 0; i <= test - n; i++)
    {
        d.push_back(a[i + n - 1] - a[i]);
    }

    int res = *min_element(d.begin(), d.end());
    cout << res << endl;

    return 0;
}

/*
     ▬▬▬.◙.▬▬▬
     ═▂▄▄▓▄▄▂					┌─────────────────────────────────────────────┐
     ◢◤ █▀▀████▄▄▄▄◢◤			│ "Code like a poet, debug like a detective." │
     █▄ █ █▄ ███▀▀▀▀▀▀▀╬		│    "Crafted with passion and precision."    │
     ◥█████◤					│ "Every submission is a story of learning."  │
     ══╩══╩═					└─────────────────────────────────────────────┘
     ╬═╬
     ╬═╬
     ╬═╬
     ╬═╬       Hello? Nice to meet you! ◉‿◉
     ╬═╬☻/
     ╬═╬/▌
     ╬═╬/ \
*/