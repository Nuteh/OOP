#pragma once
#include <iostream>
#include <cstring>
#include <vector>


using namespace std;


class Zaposlenik {
	string ime;
	string prezime;
	string pozicija;
public:
	string getIme();
	string getPrezime();
	string getPozicija();

	void setIme(string ime);
	void setPrezime(string prezime);
	void setPozicija(string pozicija);
	void ispisiDetalje();
};