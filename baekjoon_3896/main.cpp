#include <iostream>
using namespace std;

bool isPrime(int v) {
	if (v < 2) return true;
	else if (v == 2) return false;
	else if (!(v % 2)) return true;
	else {
		for (int i = 3; i*i <= v; i += 2) {	// 앞에서 2에 대해 해줬기 때문
			if (!(v%i)) return true;
		}
		return false;
	}
}

int t, f, l, n;
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		f = n; l = n;
		while (isPrime(f)) f--;
		while (isPrime(l)) l++;
		cout << l - f << endl;
	}
	return 0;
}