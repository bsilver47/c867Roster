#include <iostream>
#include <string>
#include <sstream>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

Student* Roster::rosterParserArray(string studentData[], int size) {
	Student* classRosterArray = new Student[size];
	for (int i = 0; i < size; i++) {
		stringstream ss(studentData[i]);
		string token;
		string studentArray[9];
		int idx = 0;
		while (getline(ss, token, ',') && idx < 9) {
			studentArray[idx++] = token;
		}
		Student student;
		student.studentID = studentArray[0];
		student.firstName = studentArray[1];
		student.lastName = studentArray[2];
		student.email = studentArray[3];
		student.age = stoi(studentArray[4]);
		student.daysInCourse[0] = stoi(studentArray[5]);
		student.daysInCourse[1] = stoi(studentArray[6]);
		student.daysInCourse[2] = stoi(studentArray[7]);
		if (studentArray[8] == "SECURITY") {
			student.degreeProgram = DegreeProgram::SECURITY;
		}
		else if (studentArray[8] == "NETWORK") {
			student.degreeProgram = DegreeProgram::NETWORK;
		}
		else {
			student.degreeProgram = DegreeProgram::SOFTWARE;
		}
		classRosterArray[i] = student;
	}
	return classRosterArray;
}

void Roster::printAll(int size) {
	for (int i = 0; i < size; i++) {
		if (!studentArray[i].studentID.empty())
			studentArray[i].printer();
	}
}

void Roster::printAverageDaysInCourse(string studentID, int size) {
	for (int i = 0; i < size; i++) {
		if (studentArray[i].studentID == studentID) {
			double average = (studentArray[i].daysInCourse[0] + studentArray[i].daysInCourse[1] + studentArray[i].daysInCourse[2]) / 3.0;
			std::cout << "Average days in course for " << studentID << ": " << average << "\n";
			return;
		}
	}
	std::cout << "Student ID " << studentID << " not found.\n";
}

void Roster::printInvalidEmails(int size) {
	for (int i = 0; i < size; i++) {
		if (studentArray[i].email.find('@') == string::npos || studentArray[i].email.find('.') == string::npos || studentArray[i].email.find(' ') != string::npos) {
			std::cout << "Invalid email: " << studentArray[i].email << "\n";
		}
	}
}

void Roster::remove(string studentID, int size) {
	int removalStudentIndex = -1;
	for (int i = 0; i < size; i++) {
		if (studentID == studentArray[i].studentID) {
			std::cout << "Found student to be removed, preparing removal now\n";
			removalStudentIndex = i;
			break;
		}
	}
	if (removalStudentIndex != -1) {
		for (int i = removalStudentIndex; i < size - 1; i++) {
			studentArray[i] = studentArray[i + 1];
		}
		studentArray[size - 1] = Student(); // Clear the last element
		std::cout << "Student ID " << studentID << " removed successfully.\n";
	} else {
		std::cout << "Student ID " << studentID << " not found.\n";
	}
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	std::cout << "Students in the " << degreeProgramToString(degreeProgram) << " degree program: \n";
	for (int i = 0; i < 5; i++) {
		if (studentArray[i].degreeProgram == degreeProgram) {
			studentArray[i].printer();
		}
	}
}

void Roster::destructor(Student* classRoster) {
	delete[] classRoster;
}
