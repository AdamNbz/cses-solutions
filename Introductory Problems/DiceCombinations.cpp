#include <bits/stdc++.h>
#define MAXN 1000006
#define MOD 1000000007

using namespace std;
int n, f[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    f[0] = 1;
    for (int i=1; i<=n; i++)
    {
        for (int j=max(0, i-6); j<=i-1; j++)
        {
            f[i] = (f[i] + f[j]) % MOD;
        }
    }
    cout << f[n];
}
