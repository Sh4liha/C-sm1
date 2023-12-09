#include <iostream>

using namespace std;

int main(){
	int hargajam,lamajam,totalharga,totalbayar,kembalian;
	
	cout << "RENTAL PLAYSTATION A-Z" <<endl;
	cout << "======================" <<endl;
	cout << "Harga / Jam ";
	cin >> hargajam;
	
	cout << "Lama Jam ";
	
	cin >> lamajam;
	cout << "----------------------" << endl;
	cout << "Total Harga ";
	cout << hargajam*lamajam <<endl;
	
	
	cout << "----------------------" <<endl;
	cout << "Total Bayar ";
	cin >> totalbayar;
	
	cout<< "----------------------" << endl;
	cout << "Kembalian ";
	cout << totalbayar-hargajam*lamajam <<endl;
	cout << "----------------------" <<endl;
	
	cout << "TERIMAKASIH ATAS KUNJUNGAN ANDA " <<endl;
	}

