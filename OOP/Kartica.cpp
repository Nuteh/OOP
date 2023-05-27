#include "Kartica.h"

string Kartica::getBrKartice()
{
    return brKartice;
}

Korisnik Kartica::getKorisnik()
{
    return vlasnik;
}

string Kartica::getDatumIsteka()
{
    return datumIsteka;
}

void Kartica::setBrKartice(string brKartice)
{
    this->brKartice = brKartice;
}

void Kartica::setVlasnik(Korisnik vlasnik)
{
    this->vlasnik = vlasnik;
}

void Kartica::setDatumIsteka(string datumIsteka)
{
    this->datumIsteka = datumIsteka;
}

void Kartica::ispisiDetalje()
{
   cout << "Broj kartice: " << brKartice << endl;
   cout << "Vlasnik: " << vlasnik.getIme() << " " << vlasnik.getPrezime() << endl;
    cout << "Datum isteka: " << datumIsteka << endl;
}
