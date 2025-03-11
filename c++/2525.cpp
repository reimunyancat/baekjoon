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

    int a, b, c, d, e, f;
    cin >> a >> b;
    cin >> c;
    d = c / 60;
    e = c % 60;
    a += d;
    b += e;
    if (b >= 60) {
        a += 1;
        b -= 60;
    }
    if (a >= 24) a -= 24;
    cout << a << " " << b;

    return 0;
}
