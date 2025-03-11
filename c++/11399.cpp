#include <bits/stdc++.h>

using namespace std;

using ll = ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, t=0;
    cin >> n;

    vector<int> v(n);

    for(int i = 0 ; i < n ; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 0 ; i < n ; i++) for(int j = 0 ; j <= i ; j++) t += v[j];
    cout << t;

    return 0;
}
