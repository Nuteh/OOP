#include "Zaposlenik.h"

string Zaposlenik::getIme()
{
    return ime;
}

string Zaposlenik::getPrezime()
{
    return prezime;
}

string Zaposlenik::getPozicija()
{
    return pozicija;
}

void Zaposlenik::setIme(string ime)
{
    this->ime = ime;
}

void Zaposlenik::setPrezime(string prezime)
{
    this->prezime = prezime;
}

void Zaposlenik::setPozicija(string pozicija)
{
    this->pozicija = pozicija;
}

void Zaposlenik::ispisiDetalje()
{
    std::cout << "Ime: " << ime << std::endl;
    std::cout << "Prezime: " << prezime << std::endl;
    std::cout << "Pozicija: " << pozicija << std::endl;
}
