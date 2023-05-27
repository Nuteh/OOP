#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Ocjena {

	int vrijednost;
	string komentar;

public:

	int getVrijednost();
	string getKomentar();

	void setVrijednost(int vrijednost);
	void setKomentar(string komentar);

	void ispisiOcjenu();
};