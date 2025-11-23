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
// Created     : 09-06-2025 [18:49:41]
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

// STL Type Aliases
typedef long long d;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
typedef map<int, int> mii;
typedef set<int> si;
typedef multiset<int> msi;
typedef unordered_map<int, int> umii;
typedef unordered_set<int> usi;
typedef priority_queue<int> maxheap;
typedef priority_queue<int, vector<int>, greater<int>> minheap;

// STL Macros
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 2e5 + 5;

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

signed main()
{
    fastIO;

    vi isPrime(N, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i < N; i++)
        if (isPrime[i])
            for (int j = i * i; j < N; j += i)
                isPrime[j] = 0;

    auto nextPrime = [&](int x)
    {
        while (!isPrime[x])
            x++;
        return x;
    };

    int n, m;
    cin >> n >> m;

    vvi a(n, vi(m));            
    for (auto &row : a)             
        for (auto &x : row)         
            cin >> x;               

    int ans = INF;
    for (auto &row : a)
    {
        int dis = 0;
        for (int x : row)
            dis += nextPrime(x) - x;
        ans = minimum(ans, dis);
    }

    for (int j = 0; j < m; j++)
    {
        int dis = 0;
        for (int i = 0; i < n; i++)
            dis += nextPrime(a[i][j]) - a[i][j];
        ans = minimum(ans, dis);
    }

    cout << ans << endl;
    return 0;
}