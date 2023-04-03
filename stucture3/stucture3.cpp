#include <iostream>

using namespace std;
struct AlamatDetail
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa {
	char nim[12];
	char nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Masukan nim; ";
		cin.getline(mhs[i].nim, 12);
		cout << "Masukan nama; ";
		cin.getline(mhs[i].nama, 20);


	}
