// Code for Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string> // program uses C++ standard string class
using std::string;
using std::getline;

// GradeBook class definition
class GradeBook
{
public:  // other functions or members could call these function
	// fuction that displays a welcome message to GradeBook User
	void displayMessage(string courseName)
	{
		cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
	}//end function displayMessage
}; // end class GradeBook 


// function main begins program execution
int main()
 {
 	string nameOfCourse; // string of characters to store the course name
 	GradeBook myGradeBook; // create a GradeBook object named myGradeBook

 	// prompt for and input course name
 	cout << "Please enter the course name:" << endl;
 	getline(cin,nameOfCourse); //read a course name with blanks
 	cout << endl; // output a blank line

 	// call myGradeBook's displayMessage function
 	//and pass nameOfCourse as an argument
 	myGradeBook.displayMessage(nameOfCourse); //call object's displayMessage function
 	return 0; // indicate successful termination
 } //end main