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

    int l, p;
    cin >> l >> p;
    int t = l * p;
    vector<int> v(5);
    for(int i = 0; i < 5; i++) cin >> v[i];
    for(int i = 0; i < 5; i++) cout << v[i] - t << " ";

    return 0;
}
