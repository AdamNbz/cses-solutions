#include <bits/stdc++.h>

#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#define fi first
#define se second
#define el '\n'
#define pb push_back
#define eb emplace_back
#define io() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define mask(i) (1LL << (i))
#define getbit(mask, i) (((mask) >> (i)) & 1)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<ll> v64;
typedef vector<vector<ll> > vv64;
typedef vector<p32> vp32;
typedef vector<vector<p32> > vvp32;
typedef vector<p64> vp64;
typedef vector<vector<p64> > vvp64;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;
typedef vector<string> vs;
typedef vector<vs > vvs;

int pop_cnt(ll mask) { return __builtin_popcountll(mask); }
int ctz(ull mask) { return __builtin_ctzll(mask); }
int logOf(ull mask) { return 63 - __builtin_clzll(mask); }

const ll mod = (ll)(1e9+7);
const ll inf = (ll)(2e18);

void sol()
{
    vs s(8);
    for (int i=0; i<8; i++) cin >> s[i];
    v32 p(8);
    ll ans = 0;
    bool b[15];
    iota(all(p), 0);
    do
    {
        bool ok = 1;
        for (int i=0; i<8; i++) ok &= s[i][p[i]]=='.';
        memset(b, 0, 15);
        for (int i=0; i<8; i++)
        {
            if (b[i+p[i]]) ok = 0;
            b[i+p[i]] = 1;
        }
        memset(b, 0, 15);
        for (int i=0; i<8; i++)
        {
            if (b[i+7-p[i]]) ok = 0;
            b[i+7-p[i]] = 1;
        }
        ans += ok;
    } while (next_permutation(all(p)));
    cout << ans;
}

int32_t main()
{
    io();
    sol();
    cerr << "\nTime elapsed: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}