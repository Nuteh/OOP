#pragma once
#include <iostream>
#include <cstring>
#include <vector>

#include "Film.h"
#include "Dvorana.h"
class Projekcija {
	string naziv;
	Film film;
	Dvorana dvorana;
	string vrijeme;
	double cijenaUlaznice;
public:
	Film getFilm();
	Dvorana getDvorana();
	string getVrijene();
	double getcijenaUlaznice();
	string getNaziv();
	void setNaziv(string naziv);
	void setVrijeme(string vrijeme);
	void setcijenaUlaznice(double cijenaUlaznice);
	void ispisiDetalje();
	void setFilm(Film film);
	void setDvorana(Dvorana dvorana);
};