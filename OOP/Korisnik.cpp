#include "Korisnik.h"

string Korisnik::getIme()
{
    return ime;
}

string Korisnik::getPrezime()
{
    return prezime;
}

string Korisnik::getKorisnickoIme()
{
    return korisnickoIme;
}

string Korisnik::getLozinka()
{
    return lozinka;
}

void Korisnik::setIme(string ime)
{

    this->ime = ime;
}

void Korisnik::setPrezime(string prezime)
{
    this->prezime = prezime;
}

void Korisnik::setKorisnickoIme(string korisnickoIme)
{
    this->korisnickoIme = korisnickoIme;
}

void Korisnik::setLozinka(string lozinka)
{
    this->lozinka = lozinka;
}
