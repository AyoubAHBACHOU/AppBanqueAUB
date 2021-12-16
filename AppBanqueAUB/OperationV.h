#pragma once
#include "Operation.h"
#include "Compte.h"
#include "Devise.h"
namespace banque {
	class OperationV :
		public Operation
	{
	private: 
		static string libele;
	public:
		OperationV(Compte* c, Devise* d);
		void afficher()const;
	};
}


