#include <bits/stdc++.h>

using namespace std;

int n = 7;

void printData(int data[]) {
	for (int i = 0; i < n; i++) {
		printf("%d ", data[i]);
	}
	return;
}

void bubble(int data[]) {
	int j = n - 1;
	
	while (j > 1) {
		for (int i = 0; i < j; i++) {
			if (data[i] > data[i + 1]) {
				swap(data[i], data[i + 1]);
			}
		}
		j--;
	}

	printData(data);
	return;
}

void selection(int data[]) {
	int j = 0;
	
	while (j < n) {
		int minIndex = j;

		for (int i = j; i < n; i++) {
			if (data[minIndex] > data[i]) {
				minIndex = i;
			}
		}
		if (minIndex != j) swap(data[minIndex], data[j]);
		j++;
	}

	printData(data);
	return;
}

void insertion(int data[]) {
	int j = 1;

	while (j < n) {
		for (int i = j - 1; i >= 0; i--) {
			if (data[i + 1] < data[i]) {
				swap(data[i + 1], data[i]);
			}
			else {
				break;
			}
		}
		j++;
	}

	printData(data);
	return;
}