#include "Compte.h"
#include "MAD.h"
#include "OperationR.h"
#include "OperationV.h"

using namespace banque;
Devise* Compte::plafond = new MAD(3000);
int Compte::cmpt = 0;

banque::Compte::Compte(Client* c, Devise* d):NumCmpt(++cmpt)
{
	this->titu = c;
	this->solde = d;
	this->titu->ajouter_compte(this);
	
}

void banque::Compte::crediter(Devise* d)
{
	*(this->solde) = *(this->solde) + *d;
	this->add_operation(d, true);
}

bool banque::Compte::debiter(Devise* d)
{
	if (*d <= *(this->solde) && (*d <= *(this->plafond)))
	{
		this->debiter_direct(d);
		return true;
	}
	
	return false;
}

bool banque::Compte::verser(Devise* d, Compte& c)
{
	if (this->debiter(d) == true) {
		c.crediter(d);
		return true;
	}
	return false;
}

void banque::Compte::consulter() const
{
	cout << "num compte=" << this->NumCmpt<< endl << "le solde est : ";
	this->solde->afficher();
}

void banque::Compte::add_operation(Devise* montant, bool Type)
{
	if (Type)historique.push_back(new OperationV(this,montant));
	else historique.push_back(new OperationR(this,montant));
}

void banque::Compte::debiter_direct(Devise* M)
{
	*(this->solde) = *(this->solde) - *M;
	this->add_operation(M, false);
}

void banque::Compte::add_pursontage(double D)
{
	*solde = *solde + *solde * (D / 100);
}

bool banque::Compte::verif_moitier(Devise* D) const
{
	Devise& E = *solde / 2;
	bool Res = false;
	if (E >= *D) Res = true;
	delete& E;
	return Res;;
}

bool banque::Compte::verif_Solde_sup(Devise& D) const
{
	return (*solde >= D);
}
Compte::~Compte() {
	delete solde;
	for (int i = 0; i < historique.size(); i++)
	{
		delete historique[i];
		historique[i] = NULL;
	}
}
