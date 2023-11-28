// Code for Fig. 2.13: fig02_13.cpp
// Comparing integers using if statements, relational operators
// and equality operaters
#include<iostream>

using std::cout; // program uses cout
using std::cin;  // program uses cin
using std::endl; // program uses endl
 
 // function main begins program excution
int main()
{
	int number1; // first integer to compare
	int number2; // second integer to compare

	cout << "Enter two integers to compare: "; //prompt user for data
	cin >> number1 >> number2; // read two integers from user

	if (number1 == number2)
		cout << number1 << " == " << number2 <<endl;

	if (number1 != number2)
		cout << number1 << " != " << number2 <<endl;

	if (number1 < number2)
		cout << number1 << " < " << number2 <<endl;

	if (number1 > number2)
		cout << number1 << " > " << number2 <<endl;

	if (number1 <= number2)
		cout << number1 << " <= " << number2 <<endl;

	if (number1 >= number2)
		cout << number1 << " >= " << number2 <<endl;
	
	return 0; // indicate that program ended successfully

} // end function main