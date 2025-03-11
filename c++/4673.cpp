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

int d(int n) {
    int sum = n;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    set<int> selfNumbers;
    for(int i = 1; i <= 10000; ++i) {
        selfNumbers.insert(i);
    }

    for(int i = 1; i <= 10000; ++i) {
        selfNumbers.erase(d(i));
    }

    for(int n : selfNumbers) {
        cout << n << '\n';
    }

    return 0;
}
