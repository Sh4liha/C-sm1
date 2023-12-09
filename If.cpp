# include <iostream> 

using namespace std;

int main () {
	   int nilai; 
	
	cout << "Berapa Nilai Siswa?" << endl;
	cout << "Masukkan Nilai : ";
	cin >> nilai;
	
	if (nilai >= 80 ) {
	cout << "Grade A" << endl;
	cout << "Anda Luar Biasaa..";
    }else if (nilai >= 60) {
    cout << "Grade B" << endl;
    cout << "Bagus jugaa..";
	}else if (nilai>=60) { 
	cout << "Grade C" << endl;
	cout << "Cukuplah yang penting tidak gagaaal..";
    }else if (nilai >= 50) {
    cout << "Grade D" << endl;
    cout << "Dilema Beraaat..";
    	}else 
	cout << "Grade E, Ehhhhh Gagal deeehh. Belajar lebih giat lagi yaa!!";
	
}

