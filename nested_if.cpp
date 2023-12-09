#include <iostream>

using namespace std;

int main () {
	
	long Harga;
	string KodeBaju, UkuranBaju, MerkBaju;
	
	cout << "== Program Cek Harga Baju ==\n\n";
	cout << "Masukkan Kode Baju :";
	cin >> KodeBaju;
	cout << "Masukkkan Ukuran Baju :";
	cin >> UkuranBaju;
	
	if (KodeBaju == "B01"){
		MerkBaju = "Adidas";
		if (UkuranBaju == "S" || UkuranBaju == "s"){
			Harga = 700000;
		}else if (UkuranBaju == "M" || UkuranBaju == "m"){
			Harga = 750000;
		}else{
			Harga = 800000;
		}
	}if (KodeBaju == "B02"){
		MerkBaju = "Balenciaga";
		if (UkuranBaju == "S" || UkuranBaju == "s"){
			Harga = 800000;
		}else if (UkuranBaju == "M" || UkuranBaju == "m"){
			Harga = 850000;
		}else{
			Harga = 900000;
		}
	}if (KodeBaju == "B03"){
		MerkBaju = "Luois Vuitton";
		if (UkuranBaju == "S" || UkuranBaju == "s"){
			Harga = 980000;
		}else if (UkuranBaju == "M" || UkuranBaju == "m"){
			Harga = 1200000;
		}else{
			Harga = 1700000;
		}
	}if (KodeBaju == "B04"){
		MerkBaju = "Channel";
		if (UkuranBaju == "S" || UkuranBaju == "s"){
			Harga = 1000000;
		}else if (UkuranBaju == "M" || UkuranBaju == "m"){
			Harga = 1500000;
		}else{
			Harga = 1800000;
		}
	}if (KodeBaju == "B05"){
		MerkBaju = "Gucci";
		if (UkuranBaju == "S" || UkuranBaju == "s"){
			Harga = 1700000;
		}else if (UkuranBaju == "M" || UkuranBaju == "m"){
			Harga = 1900000;
		}else{
			Harga = 2200000;
		}
	}if (KodeBaju == "B06"){
		MerkBaju = "Dior";
		if (UkuranBaju == "S" || UkuranBaju == "s"){
			Harga = 1800000;
		}else if (UkuranBaju == "M" || UkuranBaju == "m"){
			Harga = 2300000;
		}else{
			Harga = 1600000;
	}
}

	cout << "\n\n MerkBaju =" << MerkBaju;
	cout << "\n UkuranBaju =" << UkuranBaju;
	cout << "\n HargaBaju =" << Harga;}
