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


}

