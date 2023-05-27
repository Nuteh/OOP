#pragma once
#include <iostream>
#include <cstring>
#include <vector>

#include "Ocjena.h"
using namespace std;

class Film {
    std::string naslov;
    std::string zanr;
    int ocj;
    int trajanje;
    vector<Ocjena> ocjene;

public:
    int getOcj();
    void setOcjen(int ocj);
    string Getnaslov();
    string getZanr();
    int getTrajanje();
    vector<Ocjena> getOcjena();
    void dodajOcjenu(Ocjena& novaOcjena);
    double prosjecnaOcjena();
    void setNaslov(string naslov);
    void setZanr(string zanr);
    void setTrajanje(int trajanje);
    void ispisiDetalje();
};