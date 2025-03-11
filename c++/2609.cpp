#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>

using namespace std;

int main() {
    int a, b, gcd = 1, god;
    
    cin >> a >> b;
    god = a * b;
    for (int i = 2; i <= min(a, b); i++) if (a % i == 0 && b % i == 0) gcd = i;
    cout << gcd << '\n';
    for(int i = a*b; i > 2; i--) if (i % a == 0 && i % b == 0) god = i;
    cout << god;

    return 0;
}