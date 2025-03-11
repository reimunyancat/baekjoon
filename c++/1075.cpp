#include <iostream>

using namespace std;
int main() {
    int n, f, temp;

    cin >> n;
    cin >> f;
    temp = n % 100;
    n -= temp;
	temp = 0;
    while (true) {
        if ((n+temp) % f == 0) {
			break;
		}
        temp++;
	}
	if (temp < 10) {
		cout << "0" << temp;
	} else {
		cout << temp;
	}
	return 0;

}