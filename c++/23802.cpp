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

using namespace std;

using ull = unsigned ll;
using ll = ll;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for(int j = 0 ; j < n * 5; j++) cout << "@";
        cout << '\n';
    }
    for (int i = 0; i < n * 4; i++) {
        for (int j = 0; j < n; j++) cout << "@";
        cout << '\n';
    }
    return 0;
}