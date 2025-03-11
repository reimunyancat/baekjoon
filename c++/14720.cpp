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
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

using namespace std;
using ull = unsigned ll;
using ll = ll;

int main() {
    int n, wi = 0, p, o=0;
    cin >> n;
    for(int i = 0; i < n; i++) {
		cin >> p;
		if (p == o) {
			wi++;
			o++;
		}
		if(o == 3) o = 0;
	}
	cout << wi;
    return 0;
}