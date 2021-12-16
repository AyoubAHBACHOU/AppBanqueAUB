#include "CompteEpargne.h"
#include <assert.h>

banque::CompteEpargne::CompteEpargne(Client* c, Devise* d, double t) :Compte(c, d)
{
	assert(t >= 0 && t <= 100);
	this->TauxInterêt = t;
}

void banque::CompteEpargne::calculInteret()
{
	this->add_pursontage(TauxInterêt);
}

bool banque::CompteEpargne::debiter(Devise* D)
{
	if (!this->verif_moitier(D))return false;
	this->Compte::debiter(D);
	return true;
}
