#include <stdio.h>
#include "rational.h"

rational::rational(int x, int y){
	if(y!= 0){
		this->nume = x;
		this->denom = y;
	}
	else{
		cout<<"Not a valid rational number"<<endl;
	}
}

rational::~rational(){
	nume = 0;
	denom = 0;
}

void rational::value(){
	if(this->denom == 0){
		cout<<"No rational number"<<endl;
		return;
	}
	int less;
	if(this->nume < this->denom)
		less = this->nume;
	else
		less = this->denom;
	for(int i = less; i > 2; i--){
		if(this->nume%i == 0 && this->denom&i == 0){
			this->nume = this->nume/i;
			this->denom = this->denom/i;
		}
	}
	cout<<this->nume<<" over "<<this->denom<<endl;
}

void rational::add(const rational& RHS){
	int more, LCM, mult1, mult2;
	int a , b;
	a = this->denom;
	b = RHS.denom;
	if(a != b){
		if (a > b){
			more = a;
		}
		else{
			more = b;
		}
		LCM = b*a;
		for(int i = b*a; i <= more; i--){
			if(a%i == 0 && b%i == 0){
				LCM = i;
			}
		}
		mult1 = LCM/a;
		mult2 = LCM/b;
		this->nume = (this->nume*mult1)+(RHS.nume*mult2);
		this->denom = LCM;
	}	
	else{
	this->nume = this->nume+RHS.nume;;;
	}


}

void rational::subtract(const rational& RHS){
	int more, LCM, mult1, mult2;
	int a , b;
	a = this->denom;
	b = RHS.denom;
	if(a != b){
		if (a > b){
			more = a;
		}
		else{
			more = b;
		}
		LCM = b*a;
		for(int i = b*a; i <= more; i--){
			if(a%i == 0 && b%i == 0){
				LCM = i;
			}
		}
		mult1 = LCM/a;
		mult2 = LCM/b;
		this->nume = (this->nume*mult1)-(RHS.nume*mult2);
		this->denom = LCM;
	}	
	else{
		this->nume = this->nume-RHS.nume;
	}
}

void rational::divide(rational RHS){
	this->nume = this->nume*RHS.denom;
	this->denom = this->denom*RHS.nume;
}

void rational::multiply(rational RHS){
	this->nume = this->nume*RHS.nume;
	this->denom = this->denom*RHS.denom;
}