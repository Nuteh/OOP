#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include "Projekcija.h"

class Raspored {
	vector<Projekcija> projekcije;

public:
	void dodajProjekciju(Projekcija novaProjekcija);
	void izbrisiProjekciju(int index);
	void ispisiRaspored();

};