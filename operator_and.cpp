#include <iostream>

using namespace std;

int main () {
	int nilai_akademik;
	cout << "Masukkan Nilai Akademik :";
	cin >> nilai_akademik;
	
	int nilai_psikotes;
	cout << "Masukkan Nilai Psikotes :";
	cin >> nilai_psikotes;
	
	if ((nilai_akademik >= 80) && (nilai_psikotes >=90)){
		cout << "Selamat Anda Lulus";
	}else{ 
		cout << "Maaf Anda Tidak Lulus";
	}
	}
