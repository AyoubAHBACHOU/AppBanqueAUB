#include "Euro.h"
using namespace banque;

const double banque::Euro::ratioDollar = 1.13;
const double banque::Euro::ratioMad = 10.4;

banque::Euro::Euro(double val): Devise(val)
{
}

banque::Euro::Euro(const Euro& e): Devise(e)
{
}

void banque::Euro::afficher() const
{
	this->Devise::afficher();
	cout << "Euro" << endl;
}

Devise* banque::Euro::copie() const
{
	return new Euro(*this);
}

Dollar* banque::Euro::ConverToDollar() const
{
	return new Dollar(this->convert(ratioDollar));
}

MAD* banque::Euro::ConverToMAD() const
{
	return new MAD(this->convert(ratioMad));
}

Euro* banque::Euro::ConverToEuro() const
{
	return new Euro(*this);
}

