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

int jj(int a, int b) {
    if (a % b == 0) return b;
    else return jj(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if (a >= b) cout << a * b / jj(a, b) << "\n";
        else cout << a * b / jj(b, a) << "\n";
    }

    return 0;
}
