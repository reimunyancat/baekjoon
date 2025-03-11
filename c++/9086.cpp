#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>

using namespace std;

int main() {
    int t;
	string s;

	cin >> t;
    for(int i = 0 ; i < t ; i++) {
		cin >> s;
		cout << s[0] << s[s.size()-1] << '\n';
	}

    return 0;
}