// 10.cpp 
// GradeBook member-function definitions. This file contains 
// implementations of the member functions prototyped in GradeBook.h. 
#include <iostream>

using namespace std;

#include "10.h" // include definition of class GradeBook 

// constructor initializes courseName with string supplied as argument 
GradeBook::GradeBook(string name)
{
	setCourseName(name); // call set function to initialize courseName 
} // end GradeBook constructor 

// function to set the course name 
void GradeBook::setCourseName(string name)
{
	courseName = name; // store the course name in the object 
} // end function setCourseName 
// function to get the course name 
string GradeBook::getCourseName()
{
	return courseName; // return object's courseName 
} // end function getCourseName 

// display a welcome message to the GradeBook user 
void GradeBook::displayMessage()
{
// call getCourseName to get the courseName 
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << endl;
} // end function displayMessage