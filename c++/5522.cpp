#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>

using namespace std;

int main() {
    int a, sum = 0;
    for(int i = 0 ; i < 5 ; i++) {
		cin >> a;
		sum += a;
	}
	cout << sum;
	return 0;
}