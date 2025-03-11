#include <bits/stdc++.h>

using namespace std;

using ll = ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, t = 0, p = 0;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());

    while (k > 0 && p <= n) {
        if (k - v[p] >= 0) {
            k -= v[p];
            t++;
        }
        else p++;
    }

    cout << t;

    return 0;
}
