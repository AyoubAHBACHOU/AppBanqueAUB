#pragma once
#include "Devise.h"
#include "Dollar.h"
#include "MAD.h"
namespace banque {
    class Euro :
        public Devise
    {
        const static double ratioMad;
        const static double ratioDollar;
    public:
        Euro(double val);
        Euro(const Euro& e);
         void afficher() const;
        Devise* copie() const override;
        Dollar* ConverToDollar()const override;
        MAD* ConverToMAD()const override;
        Euro* ConverToEuro()const override;
    };
}


