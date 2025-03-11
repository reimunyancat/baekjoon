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
    int a, temp;
	bool flag;
    cin >> a;
    
    for (int i = a; i >= 4; i--) {
		temp = i;
		flag = true;
		while (temp > 0) {
			if (temp % 10 != 4 && temp % 10 != 7) {
				flag = false;
				break;
			}
			temp /= 10;
		}
		if (flag) {
			cout << i << endl;
			break;
		}
	}
    return 0;
}