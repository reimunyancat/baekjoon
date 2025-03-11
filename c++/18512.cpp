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
    int x, y, p1, p2, i = 100000;
    cin >> x >> y >> p1 >> p2;
    bool f = true;
    while(i > 0) {
		if(p1 > p2) p2 += y;
		else if (p1 < p2) p1 += x;
        else f = false;
        i--;
	}
	if(f) cout << -1;
	else cout << p1;
    
    return 0;
}
