#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>

using namespace std;

int main() {
    int a, b, c, min = 0, min2 = 0, max = 0;

    cin >> a >> b >> c;
    if(a <= b && a <= c) min = a;
    else if(b <= c && b <= a) min = b;
    else min = c;

    if (coke <= sprite) min2 = coke;
    else min2 = sprite;

    min = min + min2 - 50;

    cout << min;

    return 0;
}