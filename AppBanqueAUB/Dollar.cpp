#include "Dollar.h"
#include "Euro.h"
#include "MAD.h"
using namespace banque;

//date conversion 08\12\2021
const double Dollar::ratioMad = 9.18;
const double Dollar::ratioEuro = 0.88;

banque::Dollar::Dollar(double val): Devise(val)
{
}

banque::Dollar::Dollar(const Euro& e):Devise(e)
{
}

void banque::Dollar::afficher() const
{
	this->Devise::afficher();
	cout << "Dollar" << endl;
}

Devise* banque::Dollar::copie() const
{
	return new Dollar(*this);
}

Dollar* banque::Dollar::ConverToDollar() const
{
	return new Dollar(*this);
}

MAD* banque::Dollar::ConverToMAD() const
{
	return new MAD(this->convert(ratioMad));
}

Euro* banque::Dollar::ConverToEuro() const
{
	return new Euro(this->convert(ratioEuro));
}
