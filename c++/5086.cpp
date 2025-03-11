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

    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        if (b % a == 0) cout << "factor" << "\n";
        else if (a % b == 0) cout << "multiple" << "\n";
        else cout << "neither" << "\n";
    }

    return 0;
}
