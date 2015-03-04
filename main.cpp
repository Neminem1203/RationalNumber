#include "rational.cpp"
using namespace std;


int main(){
	int inp;
	int x, y;
	cout<<"~~~~~Rational Number Calculator~~~~~"<<endl;
	cout<<"Do you want to add(1), subtract(2), divide (3), multiply(4): ";
	cin>>inp;
	while(inp){
		cout<<"Input first numerator: ";
		cin>>x;
		cout<<"Input first denominator: ";
		cin>>y;
		rational LR(x, y);
		cout<<"Input second numerator: ";
		cin>>x;
		cout<<"Input second denominator: ";
		cin>>y;
		rational RR(x, y);
		if(inp == 1){
			LR.add(RR);
			cout<<"The sum is ";
			LR.value();
		}
		else if(inp == 2){
			LR.subtract(RR);
			cout<<"The difference is ";
			LR.value();
			
		}
		else if(inp == 3){
			LR.divide(RR);
			cout<<"The quotient is ";
			LR.value();
			
		}
		else if(inp == 4){
			LR.multiply(RR);
			cout<<"The product is ";
			LR.value();
		}
		cout<<"Do you want to exit? (0 = exit, 1 = continue): ";
		cin>>inp;
		cout<<endl;
		if(inp){
			cout<<"~~~~~Rational Number Calculator~~~~~"<<endl;
			cout<<"Do you want to add(1), subtract(2), divide (3), multiply(4): ";
			cin>>inp;
		}
	}
}