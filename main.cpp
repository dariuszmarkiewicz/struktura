#include <iostream>

using namespace std;

struct samochod{
	string marka;
	string model;
	int rok_produkcji;
	double pojemnosc;
}   renault = {"renault","megane",2013,2.0},
    peugeot = {"peugeot", "leon", 2015, 1.2};

int main()
{
    samochod fiat = {"fiat", "tipo", 2018, 1.6};

    samochod toyota;

    toyota.marka = "toyota";
    toyota.model = "corolla";
    toyota.pojemnosc = 2.5;
    toyota.rok_produkcji = 2020;


    cout << renault.marka << endl;
    cout << renault.model << endl;
    cout << renault.rok_produkcji << endl;
    cout << renault.pojemnosc << endl << endl;

    cout << fiat.marka << endl;
    cout << fiat.model << endl;
    cout << fiat.rok_produkcji << endl;
    cout << fiat.pojemnosc << endl << endl;

    cout << toyota.marka << endl;
    cout << toyota.model << endl;
    cout << toyota.rok_produkcji << endl;
    cout << toyota.pojemnosc << endl << endl;

    cout << peugeot.marka << endl;
    cout << peugeot.model << endl;
    cout << peugeot.rok_produkcji << endl;
    cout << peugeot.pojemnosc << endl;

    return 0;
}
