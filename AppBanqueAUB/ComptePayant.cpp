#include "ComptePayant.h"

banque::ComptePayant::ComptePayant(Client* c, Devise* d, Devise* dd) :CompteCourant(c, d, dd), Compte(c, d)
{
}

bool banque::ComptePayant::debiter(Devise* D)
{
	if (!this->CompteCourant::debiter(D)) return false;
	Devise* E = D->copie();
	*E = *E * 0.05;
	this->debiter_direct(E);
	return true;
}

void banque::ComptePayant::crediter(Devise* M)
{
	this->CompteCourant::crediter(M);
	Devise* E = M->copie();
	*E = *E * 0.05;
	this->debiter_direct(E);
}
