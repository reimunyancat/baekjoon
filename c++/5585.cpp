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

int main() {
    int n, c = 0;
    cin >> n;
    n = 1000 - n;
    c += n / 500;
    n %= 500;
    c += n / 100;
    n %= 100;
    c += n / 50;
    n %= 50;
    c += n / 10;
    n %= 10;
    c += n / 5;
    n %= 5;
    c += n / 1;
    cout << c;
    return 0;
}