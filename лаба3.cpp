#include <iostream>
using namespace std;

int main() {
	int n, k10, k5, k2, k1, k;
	cout << "n = ", cin >> n, cout << "\n";
	k = 0;
	for (k10 = 0; k10 <= n / 10; k10++)
		for (k5 = 0; k5 <= (n - 10 * k10) / 5; k5++)
			for (k2 = 0; k2 <= (n - 10 * k10 - 5 * k5) / 2; k2++) {
				k1 = n - 10 * k10 - 5 * k5 - 2 * k2;
				cout << k10 << " " << k5 << " " << k2 << " " << k1 << "\n";
				k = k + 1;
			}
	cout << "k = " << k;
	return 0;
}