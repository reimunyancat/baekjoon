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

    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n - i - 1 ; j++) {
            cout << " ";
        }
        for(int j = 0 ; j < 2 * i + 1 ; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    n--;
    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j <= n - i - 1; j++) {
            cout << " ";
        }
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
