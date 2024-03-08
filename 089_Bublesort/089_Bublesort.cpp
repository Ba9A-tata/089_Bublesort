// 089_Bublesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include  <string>
using namespace std;

int arr[20]; //Deklarasi variable global array a dengan ukuran 20 
int n; // Deklarasi variable global n untuk menyimpan banyak elemen array

void input() { //Prosedur untuk input 

	while (true) {
		cout << "Masukan banyaknya elemen pada array : "; // output ke layar
		cin >> n; // input dari pengguna 
		if (n <= 20) // jika n kurang dari atau sama dengan 20
			break; // keluar dari loop
		else { // jika n lebih besar dari 20 
			cout << "/nArray dapat mempunyai maksimal 20 elemen./n"; // output ke layar 

		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; 1 < n; i++) { // looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ":"; // output ke layar 
		cin >> arr[i]; // output dari pengguna

	}
}
void  bubblesortArray() { // prosedur untuk mengurutkan array dengan metode bubble sort 
	int pass = 1; // step 1 

	do {
		for (int j = 0; j <= n - 1 - pass; j++) { // step 2 
		if (arr[j] > arr[j + 1]) { // step 3 
		}
		}

	}
}
