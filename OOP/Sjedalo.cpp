#include "Sjedalo.h"

int Sjedalo::getRedniBr()
{
    return redniBr;
}

bool Sjedalo::getZauzeto()
{
    return zauzeto;
}

void Sjedalo::setredniBr(int redniBr)
{
    this->redniBr = redniBr;
}

void Sjedalo::zauzmiMjesto()
{
    zauzeto = true;
}

void Sjedalo::oslobodiMjesto()
{
    zauzeto = false;
}
