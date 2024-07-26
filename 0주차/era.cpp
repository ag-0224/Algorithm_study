#include <bits/stdc++.h>

using namespace std;

vector<int> era(int mx_n) {
	vector<int> v;
	
	for (int i = 2; i <= mx_n; i++) {
		if (che[i]) continue;

		for (int j = 2 * i; j <= mx_n; j += i) {
			che[j] = 1;
		}
	}

	for (int i = 2; i <= mx_n; i++)
		if (che[i] == 0) v.push_back(i);

	return v;
}

int check(int n) {
	if (n == 1) return 0;
	if (n == 2) return 1;
	if (n % 2 == 0) return 0;
	for (int i = 3; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
	return 0;
}