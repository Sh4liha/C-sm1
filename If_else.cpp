#include <iostream>

using namespace std;

int main() {
	int nilai;
	
	cout << "Juara Berapa Rossi" << endl;
	cout << "Masukkan Jawabannya: ";
	cin >> nilai;
	
	if (nilai == 1) {
		cout << "Selamat Rossi, Anda Mendapatkan Mobil..";
	}else{
		cout << "Selamat Rossi, Anda Mendapatkan Motor..";
	}
}
