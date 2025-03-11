#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <stack>
#include <list>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = ll;
using i = int;

bool can_promote(i skill, const vector<i>& targets, i m, ll a) {
    if (skill < targets[0]) return false;
    ll result = 0;
    int idx = 0;
    for (int _ = 0; _ < m;) {
        if (result >= a) return true;
        
        if (idx + 1 < targets.size() && targets[idx + 1] <= skill + result) {
            idx++;
            continue;
        }
        
        result += targets[idx];
        _++;
    }
    return result >= a;
}

int find_min_skill(i n, i m, ll a, vector<i> targets) {
    sort(targets.begin(), targets.end());
    ll low = 1, high = targets[n-1], mid;

    ll result = 10000000001;
    while (low <= high) {
        mid = (low + high) / 2;

        if (can_promote(mid, targets, m, a)) { high = mid - 1; result = min(mid, result); }
        else low = mid + 1;

    }

    return result;
}

int main() {
    i n, m;
    ll a;
    cin >> n >> m >> a;
    vector<i> targets(n);
    for (i i = 0; i < n; i++) cin >> targets[i];

    cout << find_min_skill(n, m, a, targets);

    return 0;
}