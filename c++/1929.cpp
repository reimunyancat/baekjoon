#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b;
	bool n[1000001];
	int nu = 1000000;
	cin >> a >> b;
	
	for(int i = 0; i < nu; i++){
		if(i < 2){
			n[i] = false;
			continue;
		}
		n[i] = true;
	}

	for(int i = 2; i < nu; i++){
		if(n[i] == false)
			continue;
		for(int j = 2 * i; j < nu; j+=i)
			n[j] = false;
	}

	for(int i = a; i <= b; i++)
		if(n[i] == true)
			cout << i << '\n';

	return 0;
}
