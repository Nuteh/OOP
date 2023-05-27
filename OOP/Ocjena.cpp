#include "Ocjena.h"

int Ocjena::getVrijednost()
{
    return vrijednost;
}

string Ocjena::getKomentar()
{
    return komentar;
}

void Ocjena::setVrijednost(int vrijednost)
{
    this->vrijednost = vrijednost;
}

void Ocjena::setKomentar(string komentar)
{
    this->komentar = komentar;
}

void Ocjena::ispisiOcjenu()
{
    std::cout << "Ocjena: " << vrijednost << std::endl;
    std::cout << "Komentar: " << komentar << std::endl;
}
