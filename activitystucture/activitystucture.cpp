#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140185";
	mhs1.nama = "Tasya";
	mhs1.alamat = "semarang";
	mhs1.umur = 20;

	cout << "masukkan nim: ";
	cin >> mhs2.nim;
	cout << "masukkan nama: ";
	cin >> mhs2.nama;
	cout << "masukkan alamat: ";
	cin >> mhs2.alamat;
	cout << "masukkan umur: ";
	cin >> mhs2.umur;

	cout << "\nNim : " << mhs1.nim;
	cout << "\nnama : " << mhs1.nama;
	cout << "\ndesa : " << mhs1.alamat;
	cout << "\nkota : " << mhs1.umur;

	cout << "\nNim : " << mhs2.nim;
	cout << "\nnama : " << mhs2.nama;
	cout << "\ndesa : " << mhs2.alamat;
	cout << "\nkota : " << mhs2.umur;
}

