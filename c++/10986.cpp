#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<ll> s(n, 0);
    vector<ll> c(m, 0);

    ll a = 0;
    cin >> s[0];

    for(int i = 1; i < n; i++) {
        int te;
        cin >> te;
        s[i] = s[i-1] + te;
    }
    for(int i = 0; i < n; i++) {
        int tem = s[i] % m;
        if(tem == 0) a++;
        c[tem]++;
    }
    for(int i = 0; i < m; i++) if(c[i] > 1) a = a + (c[i] * (c[i] - 1) / 2);

    cout << a << "\n";

    return 0;
}