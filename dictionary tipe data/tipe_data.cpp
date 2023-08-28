#include <iostream>

using namespace std;

	int main() {
		cout << "ini adadalah type data fundamental c++ by Ronsky" << endl;
	//ini adalah typedata untuk bilangan bulat
		cout << "type data bilangan bulat " << endl;
	int a = 10; // untuk file size sedang 
	long b = 30; // untuk size file paling besar
	short c = 40; // untuk zise file paling kecil 
	cout << "int a = 10;" << endl;
	 cout<<"contoh dari bilangan bulat int a adalah  "<< a << endl;
	 cout << "long b = 30;" << endl;
	 cout <<"contoh dari bilangan bulat long b adalah  " << b<< endl;
	 cout << "short c = 40;" << endl;
	 cout <<"contoh dari bilangan bulat short c adalah  " << c << endl;
	// gunakan unsigned untuk data tidak ada positif negatif. contoh: unsigned int a = 10; ( maka nilai int tidak dapat negatif -10)

	// ini adalah typedata untuk bilangan desimal 
	 cout << "type data bilangan desimal " << endl;
	float d = 7.08; //untuk file size kecil
	double e = 10.789; // untuk file size besar 
	cout << "float d = 7.08;" << endl;
	cout << "contoh dari bilangan desimal dari float d adalah " << d << endl;
	cout << "double e = 10.789;" << endl;
	cout << "contoh dari bilangan desimal dari double e adalah " << e << endl;

	//ini adalah typedata untuk charakter 
	cout << "type data character " << endl;
	char f = 'R'; //tidak dapat lebih dari 1 huruf 
	cout << "char f = 'R';" << endl;
	cout << "contoh dari contoh typedata character dari char f adalah " << f << endl;

	//ini adalah typedata untuk boolean (true/false)
	cout << "type data boolean " << endl;
	bool g = true; // untuk true 
	bool h = false; // untuk false 
	cout << "bool g = true;" << endl;
	cout << "contoh dari contoh typedata boolean dari bool g adalah " << g << endl; // jika di run maka keluar angka 1
	cout << "bool h = false;" << endl;
	cout << "contoh dari contoh typedata boolean dari bool h adalah " << h << endl; // jika di run maka keluar angka 0

	return 0; 
}
