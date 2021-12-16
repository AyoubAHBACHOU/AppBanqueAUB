#include "OperationR.h"
using namespace banque;
string OperationR::libele = "-";


banque::OperationR::OperationR(Compte* c, Devise* d):Operation(c,d)
{
}

void banque::OperationR::afficher() const
{
	this->afficher_detail();
	cout << "Montant" << this->libele;
	this->afficher_montant();
}
