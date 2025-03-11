#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>
#include <iomanip>

using namespace std;

int main() {
    int n;
    long double d = 0, a;
    cin >> n;
    vector<long double> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a;
        d = 1 - (1 - d) * (1 - a / 100);
        b[i] = d * 100;
    }
    for (int i = 0; i < n; i++) cout << fixed << setprecision(6) << b[i] << '\n';
    return 0;
}
