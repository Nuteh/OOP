#include "Film.h"

int Film::getOcj()
{
    return ocj;
}

void Film::setOcjen(int ocj)
{
    this->ocj = ocj;
}

string Film::Getnaslov()
{
    return naslov;
}

string Film::getZanr()
{
    return zanr;
}

int Film::getTrajanje()
{
    return trajanje;
}

vector<Ocjena> Film::getOcjena()
{
    return ocjene;
}

void Film::dodajOcjenu(Ocjena& novaOcjena)
{
    ocjene.push_back(novaOcjena);
}

double Film::prosjecnaOcjena()
{
    if (ocjene.empty()) {
        return 0.0;
    }

    int sumaOcjena = 0;
    for (Ocjena& ocjena : ocjene) {
        sumaOcjena += ocjena.getVrijednost();
    }

    return static_cast<double>(sumaOcjena) / ocjene.size();
}

void Film::setNaslov(string naslov)
{
    this->naslov = naslov;
}

void Film::setZanr(string zanr)
{
    this->zanr = zanr;
}

void Film::setTrajanje(int trajanje)
{
    this->trajanje = trajanje;
}

void Film::ispisiDetalje()
{
    std::cout << "Naslov: " << naslov << std::endl;
    std::cout << "Žanr: " << zanr << std::endl;
    std::cout << "Trajanje: " << trajanje << " minuta" << std::endl;
    std::cout << "Prosjeèna ocjena: " << prosjecnaOcjena() << std::endl;
}
