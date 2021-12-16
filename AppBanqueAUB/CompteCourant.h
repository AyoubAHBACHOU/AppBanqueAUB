#pragma once
#include "Compte.h"
#include <iostream>
namespace banque {
    class CompteCourant :
        virtual public Compte
    {
    private:
        Devise* decouvert;
    public:
        CompteCourant(Client* c, Devise* d, Devise* dd);
        bool debiter(Devise* d);
        ~CompteCourant();
    };
}


