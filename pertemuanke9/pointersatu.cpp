#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;

	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main() {
	mahasiswa mhs{ 1 }; // Object mhs
	mhs.showNim(); // Member access Operator

	mahasiswa& refMhs = mhs; //Pointer reference
	refMhs.nim = 2; //Member Access Operator

	mahasiswa* pMhs = &mhs; // Pointer dereference
	pMhs->nim = 3; //Arrow Operator
	pMhs->showNim();
	return 0;
}