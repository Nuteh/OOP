#pragma once
#include <iostream>
#include <cstring>
#include <vector>


class Sjedalo {
	int redniBr;
	bool zauzeto;
public:
	int getRedniBr();
	bool getZauzeto();

	void setredniBr(int redniBr);
	void zauzmiMjesto();
	void oslobodiMjesto();
};