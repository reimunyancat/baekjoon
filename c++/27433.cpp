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
    unsigned ll y = 1;
    int x;
    cin >> x;
    if (x == 0) cout << 1;
    else {
        for (int i = 1; i <= x; i++) y = y * i;
        cout << y;
    }
    return 0;
}
