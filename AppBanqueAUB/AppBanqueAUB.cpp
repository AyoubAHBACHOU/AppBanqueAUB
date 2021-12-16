// AppBanqueAUB.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string.h>
#include "Client.h"
#include "Compte.h"
#include "CompteCourant.h"
#include "CompteEpargne.h"
#include "CompteEpargnePayant.h"
#include "ComptePayant.h"
#include "Devise.h"
#include "Dollar.h"
#include "Euro.h"
#include "MAD.h"
#include "Operation.h"
#include "OperationR.h"
#include "OperationV.h"
using namespace banque;

int main()
{
    /*Client* C1 = new Client("ahbachou", "ayoub", "adr1");
    //C1->Afficher();
    Devise* a = new MAD(1000);
    Devise* b = new MAD(200);
    Devise* c = new MAD(1000);
    Devise* d = new MAD(100);
    Devise* e = new Euro(1000);
    Devise* f = new Euro(20);
    Devise* j = new MAD(100);
    Dollar S8(15);
    MAD SA(12);
    Devise& SE = SA + S8;
    SE.afficher();
    /*CompteCourant* cmptC = new CompteCourant(C1, a, b);
    ComptePayant* cmptP = new ComptePayant(C1, c, d);
    Compte* cmptE = new CompteEpargne(C1, e, 0.01);
    C1->ajouter_compte(cmptC);
    C1->ajouter_compte(cmptP);
    C1->ajouter_compte(cmptE);
    C1->afficher();
    std::cout << "apres transactions crediter" << std::endl;
    cmptC->crediter(j);
    cmptP->crediter(j);
    cmptE->crediter(j);
    C1->afficher();
    std::cout << "apres transactions debiter" << std::endl;
    cmptC->debiter(j);
    cmptP->debiter(j);
    cmptE->debiter(j);

    CompteEpagnePayant* cmptEP = new CompteEpagnePayant(C1, a, b, 0.01);
    C1->ajouter_compte(cmptEP);
    cmptEP->crediter(j);
    cmptEP->debiter(j);
    C1->afficher();*/
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
