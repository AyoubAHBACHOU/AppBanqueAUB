#include "MAD.h"

using namespace banque;
const double MAD::ratioEuro = 0.096;
const double MAD::ratioDollar = 0.11;

banque::MAD::MAD(double val): Devise(val)
{
}

banque::MAD::MAD(const Euro& e):Devise(e)
{
}

void banque::MAD::afficher() const
{
	this->Devise::afficher();
	cout << "MAD" << endl;
}

Devise* banque::MAD::copie() const
{
	return new MAD(*this);
}

Dollar* banque::MAD::ConverToDollar() const
{
	return new Dollar(this->convert(ratioDollar)) ;
}

MAD* banque::MAD::ConverToMAD() const
{
	return new MAD(*this);
}

Euro* banque::MAD::ConverToEuro() const
{
	return new Euro(this->convert(ratioEuro));
}
