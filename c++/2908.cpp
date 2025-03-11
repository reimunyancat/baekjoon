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

    int a, b;
    cin >> a >> b;

    a = (a % 10) * 100 + (a / 10 % 10) * 10 + (a / 100);
    b = (b % 10) * 100 + (b / 10 % 10) * 10 + (b / 100);

    cout << max(a, b) << '\n';

    return 0;
}
