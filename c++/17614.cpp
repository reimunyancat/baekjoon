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
    int n, nyan = 0;
    string s;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        s = to_string(i);
        for (int j = 0; j < s.size(); j++) if (s[j] == '3' || s[j] == '6' || s[j] == '9') nyan++;
    }

    cout << nyan;

}
