#pragma once
#include <iostream>
#include <vector>
#include "Client.h"
#include "Devise.h"
#include "Operation.h"

using namespace std;
namespace banque {
	class Client;
	class Compte
	{
	private:
		const int NumCmpt;
		static int cmpt;
		Devise* solde;
		static Devise* plafond;
		Client* titu;
		vector<Operation*> historique;
	public:
		Compte(Client* c, Devise* d);
		virtual void crediter(Devise* d);
		virtual bool debiter(Devise* d)=0;
		bool verser(Devise* d, Compte& c);
		void consulter() const;
		virtual ~Compte()=0;
	protected:
		void add_operation(Devise* montant, bool Type);
		void debiter_direct(Devise* M);
		void add_pursontage(double D);
		bool verif_moitier(Devise* D)const;
		bool verif_Solde_sup(Devise& D)const;
	};
}


