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
    int n;
    cin >> n;
    while(n != 1) {
        for(int i = 2; i <= n; i++) {
            if(n % i == 0) {
                cout << i << '\n';
                n /= i;
                break;
            }
        }
    }
    return 0;
}
