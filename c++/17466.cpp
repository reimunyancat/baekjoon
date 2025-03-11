#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>

using namespace std;

int main() {
    unsigned ll wa = 1;
    int n, p;

    cin >> n >> p;
    for (int i = 1; i <= n; i++) wa = (wa * i) % p;

    cout << wa;
    return 0;
}