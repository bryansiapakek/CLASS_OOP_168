#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "\nNIM= " << nim;
		cout << "\nNama = " << nama;
	}
};

class MataKuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMk() {

		cout << "\nMasukan jumlah SKS= ";
		cin >> sks;
		cout << "\nMasukan kode MK= ";
		cin >> kode;
		cout <<"\nMasukan Nama MK = ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\nJumlah sks= " << sks;
		cout << "\nKode MK= " << kode;
		cout << "\nNama MK= " << namaMK << endl;

	}
};

int main() {

	Mahasiswa mhs;
	MataKuliah mk;

	cout << "\nMasukan NIM= ";
	cin >> mhs.nim;

	cout << "\nMasukan Nama = ";
	cin >> mhs.nama;

	mk.inputMk();
	mhs.tampil();
	mk.tampilMK();

	system("pause");
}
	

	



	
