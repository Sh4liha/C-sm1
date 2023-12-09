#include <iostream>

//using namespace std;

int main () {
	int juara;
	cout << "Juara Berapa Rossi ?" << endl;
	cout << "Masukkan Jawaban : ";
	cin >> juara;
	
	switch (juara) {
		case 1:
			cout << "Selamat Dapat Mobil";
		break;	
		case 2: 
			cout << "Selamat Dapat Motor";
		break; 
		case 3: 
			cout << "Selamat Dapat Sepeda";
		break;
		default:
			cout << "Zonk";	
	}
}
