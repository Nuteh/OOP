#include "Projekcija.h"



Film Projekcija::getFilm()
{
    return film;
}

Dvorana Projekcija::getDvorana()
{
    return dvorana;
}

string Projekcija::getVrijene()
{
    return vrijeme;
}

double Projekcija::getcijenaUlaznice()
{
    return 0.0;
}

string Projekcija::getNaziv()
{
    return naziv;
}
void Projekcija::setNaziv(string naziv)
{
    this->naziv = naziv;
}

void Projekcija::setVrijeme(string vrijeme)
{
    this->vrijeme = vrijeme;
}

void Projekcija::setcijenaUlaznice(double cijenaUlaznice)
{
    this->cijenaUlaznice = cijenaUlaznice;
}

void Projekcija::ispisiDetalje()
{
}

void Projekcija::setFilm(Film film)
{
    this->film = film;
}

void Projekcija::setDvorana(Dvorana dvorana)
{
    this->dvorana = dvorana;
}
