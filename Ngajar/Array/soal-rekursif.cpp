#include <iostream>
using namespace std;

//Fungsi rekrusif untuk menghitung jumlah dari suatu nilai sampai 1
int total(int a, int b)
{
	if (a>b){
		return a * total (a-b,b);
	} else{
		return a;
	}
}

int main(){
	int nilai,selisih;
	
	cout << "Masukkan Nilai	: "; cin >> nilai;
	cout << "Masukkan Beda	: "; cin >> selisih;
	cout << "----------------------\n";
	cout << "Hasil	: " << total(nilai,selisih);
}


