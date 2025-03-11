#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n, t;
	cin >> n;
	queue<int>Q;
	for(int i = 1; i <= n; i++) Q.push(i);

	for( ; Q.size()!= 1 ; ){
		Q.pop();
		t = Q.front();
		Q.push(t);
		Q.pop();
	}
	cout << Q.front() << "\n";

	return 0;
}


