#pragma once
#include "Compte.h"

namespace banque {
	class CompteEpargne :
		virtual public Compte
	{
	private:
		double TauxInter�t;
	public:
		CompteEpargne(Client*, Devise*, double);
		void calculInteret();
		bool debiter(Devise* D);
	};
}


