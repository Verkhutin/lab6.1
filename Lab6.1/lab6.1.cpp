#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;


void Create(int a[], const int n){
	for (int i = 0; i < n; i++) {
		a[i] = -50 + rand() * 66 / RAND_MAX;
	}
}

void PrintArr(int a[], const int n) {
	for (int i = 0; i < n; i++)
	cout << "| " << setw(4) << a[i] << " |";
}

int Amount(int a[], const int n) {
	int am = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0 || a[i] % 2 == 1)
			am++;
	}
	return am;
}

int Sum(int a[], int n) {
	int s = 0;
	for (int i = 0; i < n; i++) 
		if (a[i] < 0 || a[i] % 2 == 1)
		s += a[i];
	return s;
}

void Zero(int a[], int n) {
	for (int i = 0; i < n; i++)
		if (a[i] < 0 || a[i] % 2 == 1)
			a[i] = 0;
}



int main() {
	const int n = 24;
	int a[n];
	
	srand((unsigned)time(NULL));

	cout << "Array: " << endl;
	Create(a, n);
	PrintArr(a, n);
	cout << endl;
	cout << endl;
	cout << "Amount = " << Amount(a, n) << endl;
	cout << endl;
	cout << "Sum = " << Sum(a, n) << endl;
	cout << endl;
	Zero(a, n);
	PrintArr(a, n);

	return 0;
}
	


