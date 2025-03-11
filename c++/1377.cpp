#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using l = long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());
    int t = 0;

    for(int i = 0; i < n; i++) {
        int te = v[i].second - i;
        t = max(t, te);
    }

    cout << t + 1;

    return 0;
}