// TODO: header file guard
#ifndef SICT_FRACTION_H
#define SICT_FRACTION_H

// TODO: create namespace
namespace sict {
	// TODO: define the Fraction class
	class Fraction {
		// TODO: declare instance variables 
		int numer;
		int denom;
		// TODO: declare private member functions
		int max() const;
		int min() const;
		void reduce();
		int gcd() const;
	public:
		// TODO: declare public member functions
		Fraction();
		Fraction(int a, int b);
		bool isEmpty() const;
		void display() const;
		// TODO: declare the + operator overload
		Fraction operator+(const Fraction& rhs) const;
	};

}
#endif // !SICT_FRACTION_H

