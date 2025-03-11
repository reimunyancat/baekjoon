#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>

using namespace std;

int main() {
    int a, b, c, min = 0, min2 = 0, max = 0;

    cin >> a >> b >> c;
    if(a < b && a < c) min = a;
    else if (b < c && b < a) min = b;
    else min = c;

    if (min < a && a < b) {
        min2 = a;
        max = b;
    }
    else if (min < b && b < a) {
        min2 = b;
        max = a;
    }
    else if (min < c && c < a) {
        min2 = c;
        max = a;
    }
    else if(min < a && a < c) {
		min2 = a;
		max = c;
	}
	else if(min < b && b < c) {
		min2 = b;
		max = c;
	}
	else if(min < c && c < b) {
		min2 = c;
		max = b;
	}

    cout << min << " " << min2 << " " << max;

    return 0;
}