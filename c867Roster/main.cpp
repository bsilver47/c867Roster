#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "student.cpp"
#include "roster.cpp"

int main() {
	// Step 1: Print the header
	std::cout << "Course: C867 - Scripting and Programming - Applications \n";
	std::cout << "Language: C++ \n";
	std::cout << "Student ID: 012359331 \n";
	std::cout << "Name: Benjamin Sterling Silver \n";

	// Step 2: Create an instance of Roster
	Roster classRoster;
	// Step 3: Add students to the roster
	studentData[] = student.studentData[]
	classRoster.add(studentData);


	// Step 4: Implement the pseudo code to truly work in the context
	classRoster.printAll();
	classRoster.printInvalidEmails();
	for (const auto& student : classRoster.classRosterArray) {
		classRoster.printAverageDaysInCourse(student.studentID);
	}
	classRoster.remove("A3");
	classRoster.printAll();
	std::cout << "End of program.\n";
	std::cout << "Exiting program...\n";
	classRoster.destructor();
	return;
}


 