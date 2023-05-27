#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include "Sjedalo.h"

using namespace std;

class Dvorana {
	string naziv;
	int brSjedala;
	vector<Sjedalo> sjedala;
public:
	string getNaziv();
	int getBrSjedala();

	void setNaziv(string naziv);
	void setBrSjedala(int brSjedala);

	void ispisiDetalje();

	void dodajSjedalo(Sjedalo sjedalo);

	void izbrisiSjedalo(int index);

	void prikaziMjesta();
};