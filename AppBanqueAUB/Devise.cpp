#include <iostream>
#include <typeinfo>
#include "Devise.h"
#include "MAD.h"
#include "Dollar.h"
#include "Euro.h"
using namespace std;
using namespace banque;

banque::Devise::Devise(double v)
{
	this->valeur = v;
}

banque::Devise::Devise(const Devise& d)
{
	this->valeur = d.valeur;
}

Devise& banque::Devise::operator+(const Devise& d) const
{
	Devise* E = this->copie();
	double val;
	if (typeid(*this).name() != typeid(d).name())
	{
		Devise* D = this->convert_to_dev(d);
		val = D->valeur;
		delete D;
	}
	else 
	val = d.valeur;
	E->valeur += val;
	return *E;

}

Devise& banque::Devise::operator-(const Devise& d) const
{
	Devise* E = this->copie();
	double val;
	if (typeid(*this).name() != typeid(d).name())
	{
		Devise* D = this->convert_to_dev(d);
		val = D->valeur;
		delete D;
	}
	else
		val = d.valeur;
	E->valeur -= val;
	return *E;
}

Devise& banque::Devise::operator*(const Devise& d) const
{
	Devise* dev = this->copie();
	double val;
	if (typeid(*this).name() != typeid(d).name())
	{
		Devise* D = this->convert_to_dev(d);
		val = D->valeur;
		delete D;
	}
	else val = d.valeur;
	dev->valeur *= val;
	return *dev;
}

Devise& banque::Devise::operator*(double a) const
{
	Devise* res = this->copie();
	res->valeur = this->valeur * a;
	return *res;
}

Devise& banque::Devise::operator/(double a) const
{
	Devise* res = this->copie();
	res->valeur = this->valeur / a;
	return *res;
}

bool banque::Devise::operator<=(const Devise& d) const
{
	double val;
	if (typeid(*this).name() != typeid(d).name())
	{
		Devise* D = this->convert_to_dev(d);
		val = D->valeur;
		delete D;
	}
	else val = d.valeur;
	return (this->valeur <= val);
}

bool banque::Devise::operator>=(const Devise& d) const
{
	double val;
	if (typeid(*this).name() != typeid(d).name())
	{
		Devise* D = this->convert_to_dev(d);
		val = D->valeur;
		delete D;
	}
	else val = d.valeur;
	return (this->valeur >= val);
}


double banque::Devise::convert(double ratio) const
{
	return this->valeur*ratio;
}

void banque::Devise::afficher() const
{
	cout << "valeur du Devise:" << this->valeur;
}

Devise* banque::Devise::convert_to_dev(const Devise& d) const
{
	if (typeid(*this) == typeid(MAD)) 
		return d.ConverToMAD();
	if (typeid(*this) == typeid(Dollar)) 
		return d.ConverToDollar();
	if (typeid(*this) == typeid(Euro)) 
		return d.ConverToEuro();
}
