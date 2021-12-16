#include "Client.h"
#include "Compte.h"

banque::Client::Client(string n, string p, string a)
{
	this->nom = n;
	this->prenom = p;
	this->adresse = a;
}

void banque::Client::afficher() const
{
	cout << "nom: " << this->nom << "prenom: " << this->prenom << "adresse: " << this->adresse << endl;
	for (int i = 0; i < this->listeComptes.size(); i++) {
		this->listeComptes[i]->consulter();
	}
}

void banque::Client::ajouter_compte(Compte* c)
{
	bool exist = (find(listeComptes.begin(), listeComptes.end(), c) == listeComptes.end());
	if (exist) listeComptes.push_back(c);
}

banque::Client::~Client()
{
	for (int i = 0; i < listeComptes.size(); i++)
	{
		delete this->listeComptes[i];
		this->listeComptes[i] = 0;
	}
}
