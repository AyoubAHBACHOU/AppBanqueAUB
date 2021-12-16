#pragma once
#include <iostream>
#include <string.h>
#include "Devise.h"
using namespace std;
namespace banque {
	class Compte;
	class Operation
	{
	private:
		const long num;
		static long cmpt;
		string date;
		string heure;
		Compte* c;
		Devise* montant;
	public:
		Operation(Compte* c, Devise* m);
		virtual void afficher() const = 0;
		void afficher_detail() const;
		void afficher_montant() const;
		virtual ~Operation() ;
	};
}


