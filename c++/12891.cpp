#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using l = long;

int tar[4];
int my[4];
int check = 0;

void add(char c) {
    switch (c) {
        case 'A':
            my[0]++;
            if(my[0] == tar[0]) check++;
            break;
        case 'C':
            my[1]++;
            if(my[1] == tar[1]) check++;
            break;
        case 'G':
            my[2]++;
            if(my[2] == tar[2]) check++;
            break;
        case 'T':
            my[3]++;
            if(my[3] == tar[3]) check++;
            break;
    }
}

void rm(char c) {
    switch (c) {
        case 'A':
            if(my[0] == tar[0]) check--;
            my[0]--;
            break;
        case 'C':
            if(my[1] == tar[1]) check--;
            my[1]--;
            break;
        case 'G':
            if(my[2] == tar[2]) check--;
            my[2]--;
            break;
        case 'T':
            if(my[3] == tar[3]) check--;
            my[3]--;
            break;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int s, p, to = 0;
    string t;
    cin >> s >> p;
    cin >> t;

    for(int i = 0 ; i < 4 ; i++) {
        cin >> tar[i];
        if(tar[i] == 0) check++;
    }
    for(int i = 0 ; i < p ; i++) add(t[i]);
    if(check == 4) to++;

    for(int i = p; i < s; i++) {
        int j = i - p;
        add(t[i]);
        rm(t[j]);
        if(check == 4) to++;
    }

    cout << to << '\n';

    return 0;
}