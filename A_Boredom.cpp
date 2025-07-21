/*                 
                 _                
 __   _______  _| | ___  _ __ ___ 
 \ \ / / _ \ \/ / |/ _ \| '__/ _ \
  \ V /  __/>  <| | (_) | | |  __/
   \_/ \___/_/\_\_|\___/|_|  \___|
                                  
            v e x l o r e
               
 "Code like a poet, debug like a detective."
 "Crafted with passion and precision."
 "Every submission is a story of learning."
               ◉‿◉
// Author      : vexlore
// Created     : 09-06-2025 [03:20:44]
// University  : Metropolitan University
// Language    : C++
*/

#include <bits/stdc++.h>
using namespace std;

#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long
#define float long double
#define endl '\n'

typedef long long d;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;

const int MOD = 1000000007;
const int INF = 1000000000000000000LL;
const int N = 200005;

int modPow(int base, int exp, int mod = MOD)
{
    int result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int modInv(int a, int mod = MOD)
{
    return modPow(a, mod - 2, mod);
}

int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int freq[N], dp[N];

signed main()
{
    fastIO;

    int n;
    cin >> n;
    vi a(n);

    for (int &x : a)
    {
        cin >> x;
        freq[x]++;
    }

    dp[0] = 0;
    dp[1] = freq[1] * 1;

    for (int i = 2; i < N; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + freq[i] * i);
    }

    cout << dp[N - 1] << endl;

    return 0;
}
