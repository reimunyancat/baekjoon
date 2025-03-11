#include <iostream>

using namespace std;

int main() {
	float n, arr[1001], max = 0, sum = 0;
	float result = 0;

	cin >> n;
	for(int i = 0 ; i < n; i++) {
		cin >> arr[i];
		if(arr[i] > max) max = arr[i];
	}
	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] / (100 * max);
		sum += arr[i];
	}
	result = sum / n*10000;
	cout << result;
	return 0;

}