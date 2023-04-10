#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
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
		cout << :\nMasukan Nama MK = ";
			cin >> namaMk;
	}

	void tampilMK() {
		cout << "\nJumlah sks= " << sks;
		cout << "\nKode MK= " << kode;
		cout << "\nNama MK= " << namaMK << endl;

	}
};
	}
};

