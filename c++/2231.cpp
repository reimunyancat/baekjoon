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

int wa(int n) {
    for (int i = 1; i < n; i++) {
        int sum = i, temp = i;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == n) return i;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    cout << wa(n);
    return 0;
}