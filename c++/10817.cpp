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

    int a, b, c;
    cin >> a >> b >> c;

    while(1) {
        if(a <= b && b <= c) {
            cout << b;
            break;
        }
        if(a <= c && c <= b) {
            cout << c;
            break;
        }
        if(b <= a && a <= c) {
            cout << a;
            break;
        }
        if(b <= c && c <= a) {
            cout << c;
            break;
        }
        if(c <= a && a <= b) {
            cout << a;
            break;
        }
        if(c <= b && b <= a) {
            cout << b;
            break;
        }
    }

    return 0;
}
