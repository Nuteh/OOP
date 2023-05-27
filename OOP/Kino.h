#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include "Film.h"
#include "Ocjena.h"
#include "Korisnik.h"
#include "Dvorana.h"
#include "Zaposlenik.h"
#include "Projekcija.h"
using namespace std;

class Kino {
    std::string naziv;
    std::vector<Film> filmovi;
    std::vector<Dvorana> dvorane;
    std::vector<Projekcija> projekcije;
    std::vector<Zaposlenik> zaposlenici;

public:
    Kino(const std::string& nazivKina) : naziv(nazivKina) {}


    std::string getNaziv();
    std::vector<Film> getFilmovi();

    std::vector<Dvorana> getDvorane();

    std::vector<Projekcija> getProjekcije();

    std::vector<Zaposlenik> getZaposlenici();

    void dodajFilm(Film noviFilm);

    void dodajDvoranu(Dvorana novaDvorana);

    void dodajProjekciju(Projekcija novaProjekcija);

    void izbrisiFilm(string filmZaBrisanje);

    void izbrisiDvoranu(string dvoranaZaBrisanje);

    void izbrisiProjekciju(string projekcijaZaBrisanje);

    void dodajZaposlenika(Zaposlenik noviZaposlenik);

    void obrisiZaposlenika(string zaposlenikZaBrisanje);
;
};