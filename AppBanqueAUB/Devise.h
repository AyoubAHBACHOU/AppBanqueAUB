#pragma once
#include <iostream>


using namespace std;
namespace banque{
	class MAD;
	class Euro;
	class Dollar;
	class Devise
	{
	private:
		double valeur;
	public:
		Devise(double v);
		Devise(const Devise& d);
		Devise& operator+(const Devise& d) const;
		Devise& operator-(const Devise& d) const;
		Devise& operator*(const Devise& d) const;
		Devise& operator*(double a)const;
		Devise& operator/(double a) const;
		bool operator<=(const Devise& d) const;
		bool operator>=(const Devise& d) const;
		double convert(double Ratio)const;
		virtual void afficher() const;
		virtual Devise* copie() const = 0;
		virtual Dollar* ConverToDollar()const = 0;
		virtual MAD* ConverToMAD()const = 0;
		virtual Euro* ConverToEuro()const = 0;
	private:
		Devise* convert_to_dev(const Devise& d) const;


	};
}


