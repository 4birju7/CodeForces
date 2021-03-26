#include<bits/stdc++.h>

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

typedef long long ll;
double eps = 1e-12;
#define forn(i,n) for(ll i = 0 ; i < n ; i++)
#define foran(i,a,n) for(ll i = a ; i < n ; i++)
#define rforn(i,n) for(ll i = n ; i >= 0 ; i--)
#define rforsn(i,a,n) for(ll i = n ; i >= a ; i--)
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main()
{
    fast_cin();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //code
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
