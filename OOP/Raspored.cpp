#include "Raspored.h"

void Raspored::dodajProjekciju(Projekcija novaProjekcija)
{
	projekcije.push_back(novaProjekcija);
}

void Raspored::izbrisiProjekciju(int index)
{
	if (index >= 0 && index < projekcije.size()) {
		projekcije.erase(projekcije.begin() + index);
	}
}

void Raspored::ispisiRaspored()
{
	std::cout << "Raspored projekcija:" << std::endl;
	for (auto& projekcija : projekcije) {
		projekcija.ispisiDetalje();
		std::cout << std::endl;
	}
}
