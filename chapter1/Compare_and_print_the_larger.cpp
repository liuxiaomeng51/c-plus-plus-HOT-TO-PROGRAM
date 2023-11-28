// Practice 2.18
// Write an program that compare two integers (user input), print the larger number, followed by "is large." If numbers equal to each other, print "These numbers are equal."
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


//function main begins program execution
int main()
{

	int x;
	int y;
	
	cout << "Please enter the first integer: \n"; // prompt user for data
	cin >> x; // the first integer to compare

	cout << "Please enter the second integer: \n";
	cin >> y; // the second integer to compare

	if (x > y)
		cout << x << " is large.\n";
	if (y > x)
		cout << y << " is large. \n";
	if (x == y)
		cout << "These numbers are equal. \n";
	
	return 0;

}

