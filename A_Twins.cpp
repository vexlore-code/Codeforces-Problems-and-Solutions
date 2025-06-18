/*
    "La Ilaha Illallah Muhammadur Rasulullah"
       ===================================
                        _
       __   _______  _ | | ___  _ __ ___
        \ \ / / _ \ \/ / |/ _ \| '__/ _ \    Created   : 18-06-2025  22:46:01
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
    int n;
    cin >> n;
    vi a(n);
    int total = 0;
    for (int &x : a)
    {
        cin >> x;
        total += x;
    }

    sort(a.rbegin(), a.rend()); 
    int sum = 0, count = 0;
    for (int x : a)
    {
        sum += x;
        count++;
        if (sum > total - sum)
            break;
    }

    cout << count << endl;

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