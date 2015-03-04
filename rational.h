#pragma once
#include <iostream>
using namespace std;

class rational{
	public:
		rational(int, int);
		~rational();
		void value();
		void add(const rational&);
		void subtract(const rational&);
		void multiply(rational);
		void divide(rational);
		
	private:
		int nume;
		int denom;
};