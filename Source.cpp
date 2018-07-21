//complexData with overloaded + operator
#include<iostream>
using namespace std;

class Imaginary {

public:
	double num1, num2;

	Imaginary(double numx, double numy) {

		num1 = numx;

		num2 = numy;
	}

	Imaginary() {}
};

Imaginary operator+(const Imaginary &nu1, const Imaginary &nu2) {

	Imaginary temp;

	temp.num1 = nu1.num1 + nu2.num2;
	temp.num2 = nu1.num2 + nu2.num1;

	return temp;

}

int main() {

	double nm1, nm2, nm3, nm4;

	cout << "First number" << endl;
	cout << "Enter the real number: " << endl;
	cin >> nm1;
	cout << "Enter the imaginary number: " << endl;
	cin >> nm2;

	Imaginary number1(nm1, nm2);

	cout << "Second number" << endl;
	cout << "Enter the real number: " << endl;
	cin >> nm3;
	cout << "Enter the imaginary number: " << endl;
	cin >> nm4;

	Imaginary number2(nm3, nm4);

	Imaginary result;
	result = number1 + number2;

	cout << "The complex sum is: " << result.num1 << " + " << result.num2 << "i \n";

	system("pause");

	return 0;



}