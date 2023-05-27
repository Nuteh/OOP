#include "Dvorana.h"

string Dvorana::getNaziv()
{
    return naziv;

}
int Dvorana::getBrSjedala()
{
    return brSjedala;
}

void Dvorana::setNaziv(string naziv)
{
    this->naziv = naziv;
}

void Dvorana::setBrSjedala(int brSjedala)
{
    this->brSjedala = brSjedala;
}

void Dvorana::ispisiDetalje()
{
    std::cout << "Naziv dvorane: " << naziv << std::endl;
    std::cout << "Broj sjedala: " << brSjedala << std::endl;
}

void Dvorana::dodajSjedalo(Sjedalo sjedalo)
{
    sjedala.push_back(sjedalo);
}

void Dvorana::izbrisiSjedalo(int index)
{
    if (index >= 0 && index < sjedala.size()) {
        sjedala.erase(sjedala.begin() + index);
    }
}

void Dvorana::prikaziMjesta()
{
    std::cout << "Mjesta u dvorani " << brSjedala << ":" << std::endl;
    for (auto& sjedalo : sjedala) {
        std::cout << "Sjedalo " << sjedalo.getRedniBr() << ": ";
        if (sjedalo.getZauzeto()) {
            std::cout << "Zauzeto" << std::endl;
        }
        else {
            std::cout << "Slobodno" << std::endl;
        }
    }
}
