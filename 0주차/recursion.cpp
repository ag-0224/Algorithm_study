#include <bits/stdc++.h>

void makePermutation(int n, int r, int depth) {
	if (depth == r) {
		// logic
		return;
	}
	for (int i = depth; i < n; i++) {
		swap(v[i], v[depth]);
		makePermutation(n, r, depth + 1);
		swap(v[i], v[depth]);
	}
	return;
}

void combi(int start, vector<int> b) {
	if (b.size() == k) {
		// logic
		return;
	}
	for (int i = start + 1; i < n; i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
	return;
}

int main() {
	return 0;
}