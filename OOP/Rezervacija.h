#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include "Korisnik.h"
#include "Projekcija.h"
using namespace std;

class Rezervacija {
	Korisnik korisnik;
	Projekcija projekcija;
	int brSjedala;
public:
	Korisnik getKorisnk();
	Projekcija getProjekcija();
	int getBrSjedala();

	void setKorisnik(Korisnik korisnik);
	void setProjekcija(Projekcija projekcija);
	void setBrSjedala(int brSjedala);
	void ispisiDetalje();

};