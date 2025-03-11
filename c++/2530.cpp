#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>

using namespace std;

int main() {
    int a, b, c, d, t;
    cin >> a >> b >> c >> d;

    t = a * 3600 + b * 60 + c + d;
    a = (t / 3600) % 24;
    t %= 3600;
    b = t / 60;
    c = t % 60;

    cout << a << " " << b << " " << c;
    return 0;
}