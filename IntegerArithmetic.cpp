#include <iostream>
#include "IntegerArithmetic.hpp"
using namespace std;


int main() {
	cout <<"Enter first number: " ;
	cin >>a;
	cout <<"Enter second number: ";
	cin >>b;
	cout <<"The sum of " <<a <<" and " <<b <<" is: "<<sum(a, b) <<endl;
	cout <<"The difference of " <<a <<" and " <<b <<" is: "<<diff(a, b) <<endl;
	cout <<"The product of " <<a <<" and " <<b <<" is: "<<prod(a, b) <<endl;
	cout <<"The quotient of " <<a <<" and " <<b <<" is about: "<<quot(a, b) <<endl;
}
