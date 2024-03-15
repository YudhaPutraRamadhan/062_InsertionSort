#include <iostream>
using namespace std;

int i, n, temp, j;
int arr[12];

void input() {		//Prosedur input
	int d;
	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";  // output ke layar
		cin >> n;	// input dari pengguna
		if (n <= 12) //jika n kurang dari atau sama dengan 20
			break;  // keluar dari loop
		else {		// jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan elemen array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> arr[i];
	}
}

void insertionSort() {

	for (i = 1; i <= n - 1; i++) { //step 1
		temp = arr[i]; //step 2
		j = i - 1; //step 3
		while (j >= 0 && arr[j] > temp) //step 4
		{
			arr[j + 1] = arr[j]; //step 4a
			j--; //step 4b
		}
		arr[j + 1] = temp; //step 5

		cout << "pass" << n - 1 << ":";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << ":";
		}
		cout << endl;
	}
}

void display() {
	cout << endl;
	cout << "================================" << endl;
	cout << "Elemen array yang telah tersusun" << endl;
	cout << "================================" << endl;
	cout << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << "--->";
		}
	}
	cout << endl;
	cout << endl;
}

int main()
{
	input();
	insertionSort();
	display(); //selesai


	return 0;
}