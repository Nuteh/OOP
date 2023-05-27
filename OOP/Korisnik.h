#include <iostream>
#include <cstring>
#include <vector>


using namespace std;
#pragma once
#include <iostream>
#include <cstring>
#include <vector>

class Korisnik {
private:
    std::string ime;
    std::string prezime;
    std::string korisnickoIme;
    std::string lozinka;
public:
    
    string getIme();
    string getPrezime();
    string getKorisnickoIme();
    string getLozinka();

    void setIme(string ime);
    void setPrezime(string prezime);
    void setKorisnickoIme(string korisnickoIme);
    void setLozinka(string lozinka);
};