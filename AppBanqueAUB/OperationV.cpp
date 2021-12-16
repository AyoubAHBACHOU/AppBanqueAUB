#include "OperationV.h"
using namespace banque;
string OperationV::libele = "+";
banque::OperationV::OperationV(Compte* c, Devise* d):Operation(c,d)
{
}

void banque::OperationV::afficher() const
{
	this->afficher_detail();
	cout << "Montant" << this->libele;
	this->afficher_montant();
}
