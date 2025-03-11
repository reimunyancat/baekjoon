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

    int x[3], y[3];
    for (int i = 0; i < 3; ++i) cin >> x[i] >> y[i];

    int fourthx = x[0] ^ x[1] ^ x[2];
    int fourthY = y[0] ^ y[1] ^ y[2];

    cout << fourthx << " " << fourthY;

    return 0;
}
