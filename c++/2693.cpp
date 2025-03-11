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

    int t;
    cin >> t;
    while (t--) {
        vector<int> v(10);
        for (int i = 0; i < 10; i++) cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        cout << v[2] << '\n';
    }

    return 0;
}