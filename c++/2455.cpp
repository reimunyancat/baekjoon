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

    int c = 0, max = 0;
    int off, on;

    for (int i = 0; i < 4; ++i) {
        cin >> off >> on;
        c = c - off + on;
        if (c > max) {
            max = c;
        }
    }

    cout << max;

    return 0;
}