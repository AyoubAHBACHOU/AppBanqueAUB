#include "CompteEpargnePayant.h"

banque::CompteEpagnePayant::CompteEpagnePayant(Client* C, Devise* D, Devise* E, double d) :CompteCourant(C, D, E), Compte(C, D), CompteEpargne(C, D, d), ComptePayant(C, D, E)
{

}

bool banque::CompteEpagnePayant::debiter(Devise* d)
{
	if (!this->verif_moitier(d))return false;
	return this->ComptePayant::debiter(d);
}

void banque::CompteEpagnePayant::crediter(Devise* d)
{

	this->ComptePayant::crediter(d);
}
