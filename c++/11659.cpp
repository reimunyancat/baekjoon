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

    // int n, m;
    // cin >> n >> m;
    // vector<int> v(n);
    // for(int i = 0 ; i < n ; i++) cin >> v[i];
    // for(int idx = 0 ; idx < m ; idx++) {
    //     int i, j;
    //     cin >> i >> j;
    //     int t = 0;
    //     for(int idx2 = i-1 ; idx2 < j ; idx2++) t += v[idx2];
    //     cout << t << '\n';
    // }
    
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> prefixSum(n+1, 0);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        prefixSum[i+1] = prefixSum[i] + v[i];
    }

    for(int idx = 0; idx < m; idx++) {
        int i, j;
        cin >> i >> j;
        cout << prefixSum[j] - prefixSum[i-1] << '\n';
    }

    return 0;
}
