#pragma once
#include <iostream>
#include "Devise.h"

#include "Dollar.h"
#include "Euro.h"
namespace banque {
    class MAD :
        public Devise
    {
        const static double ratioEuro;
        const static double ratioDollar;
    public:
        MAD(double val);
        MAD(const Euro& e);
        void afficher() const;
        Devise* copie() const override;
        Dollar* ConverToDollar()const override;
        MAD* ConverToMAD()const override;
        Euro* ConverToEuro()const override;
    };

}

