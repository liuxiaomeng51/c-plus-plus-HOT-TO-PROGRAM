// Code answer for Practice 2.16
// Write an program that caculates the sum, product and division of two integers
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


//function main begins program execution
int main()
{

	int x;
	int y;
	int sum;
	int product;
	int divide;

	cout << "Please enter the first integer: \n"; // prompt user for data
	cin >> x; // the first integer to mapliply

	cout << "Please enter the second integer: \n";
	cin >> y; // the second integer to mapliply

	sum = x + y;

	product = x * y;

	divide = x / y; 
 
	cout << "The sum is " << sum << "\n"; 
	cout << "The product is " << product << "\n";
	cout << "The divide is " << divide << "\n";
	
	return 0;

}

