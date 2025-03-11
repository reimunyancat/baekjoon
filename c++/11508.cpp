#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    ll t = 0;
    cin >> n;
    vector<int> prices(n);

    for (int i = 0; i < n; ++i) cin >> prices[i];

    sort(prices.begin(), prices.end(), greater<int>());

    for (int i = 0; i < n; ++i) if (i % 3 != 2) t += prices[i];

    cout << t;

    return 0;
}