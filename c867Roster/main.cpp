#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "student.cpp"
#include "roster.cpp"

int realMain() {
	// Step 1: Print the header
	std::cout << "Course: C867 - Scripting and Programming - Applications \n";
	std::cout << "Language: C++ \n";
	std::cout << "Student ID: 012359331 \n";
	std::cout << "Name: Benjamin Sterling Silver \n";

	// Step 2: Create an instance of Roster
	Roster classRoster;
	// Step 3: Add students to the roster
	string studentData[5] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Benjamin,Silver,bsilve10@wgu.edu,26,7,10,15,SOFTWARE" };
	//studentData[] = student.studentData[]
	//classRoster.add(studentData);
	Student* processedStudentData = classRoster.rosterParserArray(studentData);


	// Step 4: Implement the pseudo code to truly work in the context
	classRoster.printAll(processedStudentData);
	classRoster.printInvalidEmails(processedStudentData);
	for (int i=0; i < sizeof(processedStudentData); i++) {
		classRoster.printAverageDaysInCourse(processedStudentData[i].studentID, processedStudentData);
	}
	/*for (Student student : classRoster.classRosterArray) {
		classRoster.printAverageDaysInCourse(student.studentID);
	}*/
	classRoster.remove("A3", processedStudentData);
	classRoster.printAll(processedStudentData);
	std::cout << "End of program.\n";
	std::cout << "Exiting program...\n";
	classRoster.destructor(processedStudentData);
	return 0;
};


 