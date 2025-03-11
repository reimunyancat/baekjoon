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

    string n;
    int b;
    cin >> n >> b;

    int result = 0;
    for (int i = 0; i < n.size(); ++i) {
        if (n[i] >= 'A' && n[i] <= 'Z') result = result * b + (n[i] - 'A' + 10);
        else result = result * b + (n[i] - '0');
    }

    cout << result;

    return 0;
}