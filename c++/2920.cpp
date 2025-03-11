#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n[8], wa = 0, wa2 = 0;
    for(int i = 0 ; i < 8 ; i++) cin >> n[i];
    for ( int i = 0; i < 8 ; i++) {
		if ( n[i] == i + 1) wa++;
        else if ( n[i] == 8 - i) wa2++;
	}
    if (wa == 8) cout << "ascending";
	else if (wa2 == 8) cout << "descending";
	else cout << "mixed";


    return 0;
}