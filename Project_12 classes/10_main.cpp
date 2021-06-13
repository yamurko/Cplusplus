// 10_main.cpp 
// GradeBook class demonstration after separating 
// its interface from its implementation. 
#include <iostream>

using namespace std;

#include "10.h" // include definition of class GradeBook 

// function main begins program execution 
int main()
{
// create two GradeBook objects 
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

 // display initial value of courseName for each GradeBook 
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
	return 0; // indicate successful termination 
} // end main