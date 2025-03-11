#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    string s;
    cin >> s;

    int a[26];
    fill_n(a, 26, -1);

    for (int i = 0; i < s.length(); i++) if (a[s[i] - 'a'] == -1) a[s[i] - 'a'] = i;

    for (int i = 0; i < 26; i++) cout << a[i] << ' ';

    return 0;
}