#include <iostream>
#include <string.h>
using namespace std;

bool n[1300000];
int t, a, fir, las;
int main() {
	memset(n, 1, sizeof(n));
	n[0] = false; n[1] = false;
	fir = 2; las = 2;
	for (long long i = 2; i*i <= 1299709; i++) {
		if (n[i]) {
			for (long long j = i * i; j <= 1299709; j += i)
				n[j] = false;
		}
	}
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a;
		for (int j = a; !n[j]; --j) fir = j;
		for (int j = a; !n[j]; ++j) las = j;
		if (n[a]) cout << 0 << endl;
		else cout << las - fir + 2 << endl;
	}
	return 0;
}