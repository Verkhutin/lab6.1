#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;


void Create(int a[], const int n, int& q){
	srand((unsigned)time(NULL));
		for (int i = 0; i < n; i++) {
			a[i] = -50 + rand() * 65 / RAND_MAX;
			if ((a[i] < 0) || (a[i] % 2 == 1 && a[i] > 0)) {
			cout << "| " << setw(4) << a[i] << " |";
			q++;
		}
		
	}
		cout << endl;
}

int Amount(int &q) {
	return q;
}

int Sum(int &q, int mas[]) {
	int s = 0;
	for (int i = 0; i < q; i++) 
		s += mas[i];
	return s;
}

void Zero(int &q, int mas[]) {
	for (int i = 0; i < q; i++) {
		mas[i] = 0;
		cout  << "| " << setw(4) << mas[i] << " |";
	}
	cout << endl;
}



int main() {
	const int n = 24;
	int a[n];
	int q = 0;

	cout << "Array 1: " << endl;
	Create(a, n, q);
	cout << endl;
	cout << "Amount = " << Amount(q) << endl;
	cout << endl;
	cout << "Sum = " << Sum(q, a) << endl;
	cout << endl;
	cout << "Array 2 (with zeros): " << endl;
	Zero(q, a);

	return 0;
}
	


