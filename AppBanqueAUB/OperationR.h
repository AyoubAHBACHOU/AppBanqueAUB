#pragma once
#include <iostream>
#include "Operation.h"
#include "Compte.h"
namespace banque {
    class OperationR :
        public Operation
    {
    private:
        static string libele;
    public:
        OperationR(Compte* c,Devise* d);
        void afficher() const;
    };
}


