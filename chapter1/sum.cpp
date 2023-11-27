// Code practice for Fig. 2.5: fig02_05.cpp
// This code print the sum of two numbers that the user input. 

#include<iostream>
 
 // function main begins program excution
int main()
{
	// variable declarations
	int number1; // first integer to add
	int number2; // second integer to add
	int sum; // sum of number1 and number2

	std::cout << "Enter first integer: "; //prompt user for data
	std::cin >> number1; // read first integer from user into number1

	std::cout << "Enter second integer: "; //prompt user for data
	std::cin >> number2; // read first integer from user into number2

	sum = number1 + number2; // add the numbers; store result in sum

	std::cout << "Sum is " << sum << std::endl; // display sum; end line

	return 0; // indicate that program ended successfully

} // end function main