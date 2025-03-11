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
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    for (int i = 2; i < 100000000000; i++) {
		if (i % a == 0 && i % b == 0 && i % c == 0) {
			cout << i;
			break;
		}
		else if(i % a == 0 && i % b == 0 && i % d == 0) {
			cout << i;
			break;
		}
		else if(i % a == 0 && i % b == 0 && i % e == 0) {
			cout << i;
			break;
		}
		else if(i % a == 0 && i % c == 0 && i % d == 0) {
			cout << i;
			break;
		}
		else if(i % a == 0 && i % c == 0 && i % e == 0) {
			cout << i;
			break;
		}
		else if(i % a == 0 && i % d == 0 && i % e == 0) {
			cout << i;
			break;
		}
		else if(i % b == 0 && i % c == 0 && i % d == 0) {
			cout << i;
			break;
		}
		else if(i % b == 0 && i % c == 0 && i % e == 0) {
			cout << i;
			break;
		}
		else if(i % b == 0 && i % d == 0 && i % e == 0) {
			cout << i;
			break;
		}
		else if(i % c == 0 && i % d == 0 && i % e == 0) {
			cout << i;
			break;
		}
	}
	return 0;

}
