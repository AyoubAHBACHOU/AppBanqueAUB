#pragma once
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
namespace banque {
	class Compte;
	class Client
	{
	private:
		string nom;
		string prenom;
		string adresse;
		vector<Compte*> listeComptes;
	public:
		Client(string n, string p, string a);
		void afficher()const;
		void ajouter_compte(Compte* c);
		~Client();

	};
}


