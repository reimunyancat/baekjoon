#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <stack>
#include <list>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <cctype>
#include <unordered_map>
#include <unordered_set>

using namespace std;

using ull = unsigned ll;
using ll = ll;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    ll m;
    cin >> m;
    vector<ll> h(m);
    for (ll i = 0; i < m; i++) cin >> h[i];

    sort(v.begin(), v.end());

    for (ll i = 0; i < m; i++) {
        ll c = upper_bound(v.begin(), v.end(), h[i]) - lower_bound(v.begin(), v.end(), h[i]);
        cout << c << " ";
    }

    return 0;
}