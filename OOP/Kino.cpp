#include "Kino.h"

std::string Kino::getNaziv()
{
    return naziv;
}

void Kino::setNaziv(string naziv)
{
    this->naziv = naziv;
}

std::vector<Film> Kino::getFilmovi()
{
    return filmovi;
}

std::vector<Dvorana> Kino::getDvorane()
{
    return dvorane;
}

std::vector<Projekcija> Kino::getProjekcije()
{
    return projekcije;
}

std::vector<Zaposlenik> Kino::getZaposlenici()
{
    return std::vector<Zaposlenik>();
}

void Kino::dodajFilm(Film noviFilm)
{
    filmovi.push_back(noviFilm);
}

void Kino::dodajDvoranu(Dvorana novaDvorana)
{
    dvorane.push_back(novaDvorana);
}

void Kino::dodajProjekciju(Projekcija novaProjekcija)
{
    projekcije.push_back(novaProjekcija);
}

void Kino::izbrisiFilm(string filmZaBrisanje)
{

    for (auto it = filmovi.begin(); it != filmovi.end(); it++) {

        if (it->Getnaslov() == filmZaBrisanje)
        {
            filmovi.erase(it);
            cout << "Film obrisan !" << endl;
            return;
        }
        
    }
    cout << "Nije pronadjen film sa tim imenom!";
}

void Kino::izbrisiDvoranu(string dvoranaZaBrisanje)
{

    for (auto it = dvorane.begin(); it != dvorane.end(); it++) {

        if (it->getNaziv() == dvoranaZaBrisanje)
        {
            dvorane.erase(it);
            cout << "Dvorana obrisana !" << endl;
            return;
        }
        cout << "Nije pronadjena dvorana sa tim imenom!";
    }
}

void Kino::izbrisiProjekciju(string projekcijaZaBrisanje)
{

    for (auto it = projekcije.begin(); it != projekcije.end(); it++) {

        if (it->getNaziv() == projekcijaZaBrisanje)
        {
            projekcije.erase(it);
            cout << "Projekcija obrisana !" << endl;
            return;
        }
       
    }
    cout << "Nije pronadjena projekcija sa tim imenom!";
}

void Kino::dodajZaposlenika(Zaposlenik noviZaposlenik)
{
    zaposlenici.push_back(noviZaposlenik);
}

void Kino::obrisiZaposlenika(string zaposlenikZaBrisanje)
{
    for (auto it = zaposlenici.begin(); it != zaposlenici.end(); it++) {

        if (it->getIme() == zaposlenikZaBrisanje)
        {
            zaposlenici.erase(it);
            cout << "Zaposlenik obrisan !" << endl;
            return;
        }

    }
    cout << "Nije pronadjen zaposlenik sa tim imenom!";
}

void Kino::ispisiRadnike()
{
    std::cout << "Radnici u kinu " << naziv << ":" << std::endl;
    for (auto& radnik : zaposlenici) {
        std::cout << radnik.getIme() << " " << radnik.getPrezime() << std::endl;
    }

}

