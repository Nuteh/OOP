#include "Rezervacija.h"

Korisnik Rezervacija::getKorisnk()
{
    return korisnik;
}

Projekcija Rezervacija::getProjekcija()
{
    return projekcija;
}

int Rezervacija::getBrSjedala()
{
    return brSjedala;
}

void Rezervacija::setKorisnik(Korisnik korisnik)
{
    this->korisnik = korisnik;
}

void Rezervacija::setProjekcija(Projekcija projekcija)
{
    this->projekcija = projekcija;
}

void Rezervacija::setBrSjedala(int brSjedala)
{
    this->brSjedala = brSjedala;
}

void Rezervacija::ispisiDetalje()
{
    std::cout << "Korisnik: " << korisnik.getIme() << " " << korisnik.getPrezime() << std::endl;
    std::cout << "Projekcija: " << projekcija.getFilm().Getnaslov() << std::endl;
    std::cout << "Broj sjedala: " << brSjedala << std::endl;
}
