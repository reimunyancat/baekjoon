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
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

using namespace std;
using ull = unsigned ll;
using ll = ll;

void ny(int n, int start, int to, int y) {
    if (n == 1) cout << start << ' ' << to << '\n';
    else {
        ny(n - 1, start, y, to);
        cout << start << ' ' << to << '\n';
        ny(n - 1, y, to, start);
    }
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    ny(n, 1, 3, 2);
    return 0;
}