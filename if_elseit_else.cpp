#include <iostream>

using namespace std;

int main() {
	int nilai ;
	
	cout << "Juara Berapa Si Rossi ? " << endl ;
	cout << "Masukan Jawabannya : ";
	cin >> nilai;
	
	if (nilai ==1) {
	cout << "selamat Rossi, Anda mendapatkan mobil..." ;
	}else if (nilai ==2){
		cout << "selamat rossi, anda mendapatkan motor..." ;
	}else if (nilai ==3){
		cout << "selamat rossi, anda mendapatkan sepeda..." ;
	}else{
		cout << "selamat rossi, anda mendapatkan zonk..." ;
	}
}


