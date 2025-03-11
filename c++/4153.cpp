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

using namespace std;

using ull = unsigned ll;
using ll = ll;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c;
	while (true) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		if (a * a + b * b == c * c) cout << "right" << '\n';
		else if (a * a + c * c == b * b) cout << "right" << '\n';
		else if (b * b + c * c == a * a) cout << "right" << '\n';
		else cout << "wrong" << '\n';
	}
	return 0;
}