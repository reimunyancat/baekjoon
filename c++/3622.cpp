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
	int A, a, B, b, P;

	bool c = 0;

	cin >> A >> a >> B >> b >> P;

	if (A + B <= P) c = 1;

	else if (a >= B && P >= A) c = 1;

	else if (A <= b && P >= B) c = 1;

	cout << ((c == 1) ? "Yes" : "No");
}