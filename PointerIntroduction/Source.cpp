#include <iostream>

using namespace std;


void modify_parameter(int number) {
	cout << "Address of param number: " << &number << endl;
	number = 9999;
}

void modify_parameter_function_that_actually_works(int* address_to_something) {
	cout << "The value of the parameter is: " << address_to_something << endl;
	*address_to_something = 9999;
}

int main() {
	int x = 1000;
	// modify_parameter(x);
	cout << "x = " << x << endl;
	cout << "Address of x is: " << &x << endl;
	modify_parameter_function_that_actually_works(&x);
	cout << "x = " << x << endl;
	return 0;
}

int main2() {


	int x = 10;
	int y = x;
	x = 20;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	cout << "Address of x: " << &x << endl;
	cout << "Address of y: " << &y << endl;

	cout << "==========================" << endl;
	int z = 41;
	modify_parameter(z);

	cout << "Address of z: " << &z << endl;

	cout << "The value of z is: " << z << endl;
	cout << "==========================" << endl;
	int a = 300;
	int* address_of_a = &a;
	cout << "Address of a is: " << &a << " value of a is: " << a << endl;
	a = 400;
	cout << "Value of address_of_a: " << address_of_a << endl;
	a = 500;
	cout << "Value of address_of_a: " << address_of_a << endl;
	a = 600;
	cout << "Value of address_of_a: " << address_of_a << endl;

	cout << "Value of a: " << a << endl;
	cout << "Value of a: " << *address_of_a << endl;

	*address_of_a = 900;
	cout << "Value of a: " << a << endl;
	cout << "==========================" << endl;
	int x2 = 10;
	int* ptr_to_x2 = &x2;
	*ptr_to_x2 = 30;
	cout << "x2 is: " << x2 << endl;
	cout << "---" << endl;
	x2 = 55;
	cout << "x2: " << x2 << endl;
	cout << "ptr: " << *ptr_to_x2 << endl; // gets the value

	return 0;
}