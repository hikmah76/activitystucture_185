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
	Mahasiswa mhs1, mhas2;

	mhs1.nim = "20220140185";
	mhs1.nama = "Tasya";
	mhs1.alamat = "semarang";
	mhs1.umur = 20;
}
