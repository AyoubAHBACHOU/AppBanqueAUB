#include "CompteCourant.h"
#include <assert.h>

banque::CompteCourant::CompteCourant(Client* c, Devise* d, Devise* dd) :Compte(c, d)
{
	assert(*d >= *dd);
	this->decouvert = dd;
}

bool banque::CompteCourant::debiter(Devise* d)
{
	if (!verif_Solde_sup(*d + *decouvert)) return false;
	if (!this->Compte::debiter(d)) return false;
	return true;
}

banque::CompteCourant::~CompteCourant()
{
	delete this->decouvert;
}
