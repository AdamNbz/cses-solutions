#include <bits/stdc++.h>
#define pb push_back
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define all(x) x.begin(),x.end()
#define el cout<<"\n"
#define MAXN 1000006
#define MOD 1000000007
#define FI " .INP"
#define FO " .OUT"

typedef long long ll;
typedef long double ld;

using namespace std;

//template giai de hsgtp
void Nhap(){
	
}

void Solve(){
	
}

void Xuat(){
	
}

//Template cho codeforces
void runCase(){
	
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen(" ", "r", stdin);
    //freopen(" ", "w", stdout);
    long n;
    cin >> n;
    while (n > 1) {
    	cout << n << " ";
    	if (n % 2 == 0) n /= 2;
    	else n = n*3+1;
	}
	cout << n;
}
