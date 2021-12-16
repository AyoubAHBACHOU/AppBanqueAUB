#pragma once
#include "Devise.h"
namespace banque {
	class Dollar :
		public Devise
	{
        const static double ratioEuro;
        const static double ratioMad;
    public:
        Dollar(double val);
        Dollar(const Euro& e);
        void afficher() const;
        Devise* copie() const override;
        Dollar* ConverToDollar()const override;
        MAD* ConverToMAD()const override;
        Euro* ConverToEuro()const override;
	};
}


