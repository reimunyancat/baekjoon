#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    set<int> remainders;
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        remainders.insert(num % 42);
    }
    cout << remainders.size();
    return 0;
}