#include <iostream>

using namespace std;

int main() {
	int nilai_akademik, nilai_psikotes;

	cout << "Masukkan Nilai Akademik : ";
	cin >> nilai_akademik;

	cout << "Masukkan Nilai Psikotes : ";
	cin >> nilai_psikotes;		

	if (nilai_akademik >= 70|| nilai_psikotes >= 80 ) {
		cout << "Selamat Anda Lulus";
	}else {
		cout << "Tidak lulus";
	}
}
