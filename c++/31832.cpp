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

bool isvidTeamName(const string& teamName) {
    int lowerCount = 0, upperCount = 0;
    bool hasNonDigit = false;

    for (char ch : teamName) {
        if (islower(ch)) {
            lowerCount++;
        }
        else if (isupper(ch)) {
            upperCount++;
        }
        if (!isdigit(ch)) {
            hasNonDigit = true;
        }
    }

    if (upperCount > lowerCount) {
        return false;
    }
    if (teamName.size() > 10) {
        return false;
    }
    if (!hasNonDigit) {
        return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    vector<string> teamNames(n);

    for (int i = 0; i < n; ++i) {
        cin >> teamNames[i];
    }

    for (const string& teamName : teamNames) {
        if (isvidTeamName(teamName)) {
            cout << teamName << endl;
            break;
        }
    }

    return 0;
}
