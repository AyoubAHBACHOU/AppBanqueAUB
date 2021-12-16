#pragma once
#include"CompteEpargne.h"
#include"ComptePayant.h"
namespace banque {
	class CompteEpagnePayant :virtual public CompteEpargne, virtual public ComptePayant
	{
	public:
		CompteEpagnePayant(Client*, Devise*, Devise*, double);
		bool debiter(Devise*);
		void crediter(Devise*);
	};
}