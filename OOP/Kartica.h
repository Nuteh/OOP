#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include "Korisnik.h"
using namespace std;
class Kartica {
	string brKartice;
	Korisnik vlasnik;
	string datumIsteka;
public:

	string getBrKartice();
	Korisnik getKorisnik();
	string getDatumIsteka();

	void setBrKartice(string brKartice);
	void setVlasnik(Korisnik vlasnik);
	void setDatumIsteka(string datumIsteka);

	void ispisiDetalje();
};