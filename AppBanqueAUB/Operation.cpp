#include "Operation.h"

using namespace banque;
long Operation::cmpt = 0;

banque::Operation::Operation(Compte* c, Devise* m):num(++cmpt)
{
	this->date = __DATE__;
	this->heure = __TIME__;
	this->c = c;
	this->montant = m;
}

void banque::Operation::afficher_detail() const
{
	cout << "operation numéro: " << this->num<<endl;
	cout << "le " << this->date << " à " << this->heure << endl;
}

void banque::Operation::afficher_montant() const
{
	cout << "montant: " << this->montant << endl;
}

banque::Operation::~Operation()
{
	delete this->montant;
}
