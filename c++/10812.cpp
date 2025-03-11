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

    int N, M;
    cin >> N >> M;

    vector<int> baskets(N);
    for (int i = 0; i < N; ++i) {
        baskets[i] = i + 1;
    }

    for (int m = 0; m < M; ++m) {
        int i, j, k;
        cin >> i >> j >> k;
        --i; --j; --k;

        vector<int> temp;
        temp.insert(temp.end(), baskets.begin() + k, baskets.begin() + j + 1);
        temp.insert(temp.end(), baskets.begin() + i, baskets.begin() + k);

        for (int idx = 0; idx < temp.size(); ++idx) {
            baskets[i + idx] = temp[idx];
        }
    }

    for (int b : baskets) {
        cout << b << " ";
    }
    cout << endl;

    return 0;
}