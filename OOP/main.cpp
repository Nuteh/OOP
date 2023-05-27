
#include <iostream>
#include "Dvorana.h"
#include "Film.h"
#include "Kartica.h"
#include "Kino.h"
#include "Korisnik.h"
#include "Ocjena.h"
#include "Projekcija.h"
#include "Raspored.h"
#include "Rezervacija.h"
#include "Sjedalo.h"
#include "Zaposlenik.h"

Dvorana dvorana;
Film film;
Kartica kartica;
Kino kino;
Korisnik korisnik;
Ocjena ocjena;
Projekcija projekcija;
Raspored raspored;
Rezervacija rezervacija;
Sjedalo sjedalo;
Zaposlenik zaposlenik;
vector<Korisnik> korisnici;
void izbornik() {
	cout << " | -------- KINO -------- |" << endl;
	cout << " 1 | Dodaj Zaposlenika" << endl;
	cout << " 2 | Dodaj Dvoranu" << endl;
	cout << " 3 | Dodaj Projekciju" << endl;
	cout << " 4 | Ispisi Zaposlenike " << endl;
	cout << " 5 | Izbrisi Zaposlenika" << endl;
	cout << " 6 | Izbrisi Projekciju" << endl;
	cout << " 7 | Izbrisi Dvoranu" << endl;
	cout << " 8 | Dodaj Film " << endl;
	cout << " 9 | Dodaj korisnika" << endl;
	cout << " 10 | Ocjenite Film" << endl;
	cout << "Odabir: ";
}

void kreirajdvor() {
	string koristi;
	int a;
	cout << "Ime dvorane: ";
	cin >> koristi;
	dvorana.setNaziv(koristi);
	cout << "Broj sjedala: ";
	cin >> a;
	dvorana.setBrSjedala(a);
	cout << "Dvorana je uspjesno dodana !" << endl;
	cout << "----------------------------" << endl;
	dvorana.ispisiDetalje();
	cout << "----------------------------" << endl;
}

void dodajFilm() {
	string koristi;
	int temp;
	cout << "Naslov filma: ";
	cin.ignore();
	cin >> koristi;
	film.setNaslov(koristi);
	cout << "Zanr filma: ";
	cin.ignore();
	cin >> koristi;
	film.setZanr(koristi);
	cout << "Trajanje filma (u minutama): ";
	cin >> temp;
	film.setTrajanje(temp);
	cout << "Ocjena filma: ";
	cin >> temp;
	film.setOcjen(temp);
	projekcija.setFilm(film);
}
int main()
{
	int a,temp;
	string koristi;
	cout << "Ime kina: ";
	cin >> koristi;
	kino.setNaziv(koristi);
	
	while (true) {
		izbornik();
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "Ime zaposlenika: ";
			cin.ignore();
			cin >> koristi;
			zaposlenik.setIme(koristi);
			cout << "Prezime zaposlenika: ";
			cin.ignore();
			cin >> koristi;
			zaposlenik.setPrezime(koristi);
			cout << "Pozicija zaposlenika: ";
			cin.ignore();
			cin >> koristi;
			zaposlenik.setPozicija(koristi);
			kino.dodajZaposlenika(zaposlenik);
			cout << "Dodan zaposlenik !" << endl;
			zaposlenik.ispisiDetalje();
			break;
		case 2:
			kreirajdvor();
			break;
		case 3:
			cout << "Ime projekcije: ";
			cin.ignore();
			cin >> koristi;
			projekcija.setNaziv(koristi);
			cout << "Zelite vi dodati zadnji spremljeni film ili novi?" << endl << "1 | Zadnji spremljeni - 2 | Novi" << endl;
			cin >> a;
			switch (a)
			{case 1:
				projekcija.setFilm(film);
				break;
			case 2:
				dodajFilm();
				break;
			default:
				break;
			}
			cout << "Dodati zadnju dvoranu ili novu ?" << endl << "1 | Zadnja spremljena - 2 | Nova" << endl;
			cin >> temp;
			switch (temp)
			{case 1:
				projekcija.setDvorana(dvorana);
				break;
			case 2:
				kreirajdvor();
			default:
				break;
			}
			cout << "cijena ulaznice: ";
			cin >> temp;
			projekcija.setcijenaUlaznice(temp);
			cout << "Vrijeme: dd:mm:yy hh:mm:ss";
			cin >> koristi;
			projekcija.setVrijeme(koristi);
			kino.dodajProjekciju(projekcija);
			cout << "Dodana je projekcija !" << endl;
			projekcija.ispisiDetalje();
			break;
		case 4:
			kino.ispisiRadnike();
			break;
		case 5:
			cout << "Ime zaposlenika: ";
			cin >> koristi;
			kino.obrisiZaposlenika(koristi);
			break;
		case 6:
			cout << "Ime projekcije: ";
			cin >> koristi;
			kino.izbrisiProjekciju(koristi);
			break;
		case 7:
			cout << "Ime dvorane: ";
			cin >> koristi;
			kino.izbrisiDvoranu(koristi);
			break;
		case 8:
			dodajFilm();
			break;
		case 9:
			cout << "Ime korisnika: ";
			cin >> koristi;
			korisnik.setIme(koristi);
			cout <<"Prezime korisnika: ";
			cin >> koristi;
			korisnik.setPrezime(koristi);
			cout << "Hocete li korisnicko ime " << korisnik.getIme() << korisnik.getPrezime() << "22 ili drugo? 1 - Da | 2 - Ne" << endl;
			cin >> temp;
			if (temp == 1) {
				koristi = korisnik.getIme() + korisnik.getPrezime() + "22";
				
			}
			else {
				cin.ignore();
				cout << "Korisnicko ime po zelji: ";
				cin >> koristi;

			}
			korisnik.setKorisnickoIme(koristi);
			cout << "Lozinka: ";
			cin >> koristi;
			korisnik.setLozinka(koristi);
			korisnici.push_back(korisnik);
			cout << "Dodali ste novog korisnika !";
			break;

		case 10:
			koristi = film.Getnaslov();
			if (koristi.empty()) {
				cout << "Prvo dodajte film !" << endl;
				break;
			}
			if (korisnici.empty()) {
				cout << "Prvo dodajte korisnika za ocjenu filma !" << endl;
			}
			cout << "Ocjena filma: ";
			cin >> temp;
			ocjena.setVrijednost(temp);
			cout << "Komentar na film: ";
			cin.ignore();
			cin >> koristi;
			ocjena.setKomentar(koristi);
			cout << "Ocjena dodana od strane korisnika " << korisnik.getIme() << " ! " << endl;
			break;
		default:
			break;
		}

	}
 
}

