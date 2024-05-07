#include <iostream>
using namespace std;

class persegiPanjang
{
public:
	int panjang, lebar;
	int luasPersegiPanjang(int a, int b)
	{
		return a * b;
	}
	
};

class segitiga
{
public:
	int tinggi, alas;
	int luasSegitiga(int a, int t)
	{
		return 0.5 * a * t;
	}

	int hitung(persegiPanjang p)
	{
		return p.panjang;
	}
};


int main()
{
	persegiPanjang pp;
	segitiga sg;
	cout << "Masukan Panjang: ";
	cin >> pp.panjang;
	cout << "Masukan lebar: ";
	cin >> pp.lebar; 
	cout << "Masukan Tinggi: ";
	cin >> sg.tinggi;
	cout << "Masukan alas: ";
	cin >> sg.alas;
	cout << "Luas Persegi Panjang: " << pp.luasPersegiPanjang(pp.panjang, pp.lebar) << endl;
	cout << "Luas Segitiga: " << sg.luasSegitiga(sg.alas, sg.tinggi) << endl;
}

