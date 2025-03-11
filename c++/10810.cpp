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

using namespace std;

using ull = unsigned ll;
using ll = ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, i, j, k;
    cin >> n >> m;
    vector<int> v(n);
    for(int idx = 0 ; idx < m ; idx++) {
        cin >> i >> j >> k;
        for(int idx2 = i-1 ; idx2 < j ; idx2++) {
            v[idx2] = k;
        }
    }
    for(int idx = 0; idx < n; idx++) cout << v[idx] << ' ';

    return 0;
}
