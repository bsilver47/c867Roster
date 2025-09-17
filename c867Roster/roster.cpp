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

void Roster::printAll(Student* classRoster, int size) {
	for (int i = 0; i < size; i++) {
		if (!classRoster[i].studentID.empty())
			classRoster[i].printer();
	}
}

void Roster::printAverageDaysInCourse(string studentID, Student* classRoster, int size) {
	for (int i = 0; i < size; i++) {
		if (classRoster[i].studentID == studentID) {
			double average = (classRoster[i].daysInCourse[0] + classRoster[i].daysInCourse[1] + classRoster[i].daysInCourse[2]) / 3.0;
			std::cout << "Average days in course for " << studentID << ": " << average << "\n";
			return;
		}
	}
	std::cout << "Student ID " << studentID << " not found.\n";
}

void Roster::printInvalidEmails(Student* classRoster, int size) {
	for (int i = 0; i < size; i++) {
		if (classRoster[i].email.find('@') == string::npos || classRoster[i].email.find('.') == string::npos || classRoster[i].email.find(' ') != string::npos) {
			std::cout << "Invalid email: " << classRoster[i].email << "\n";
		}
	}
}

void Roster::remove(string studentID, Student* classRoster, int size) {
	int removalStudentIndex = -1;
	for (int i = 0; i < size; i++) {
		if (studentID == classRoster[i].studentID) {
			std::cout << "Found student to be removed, preparing removal now\n";
			removalStudentIndex = i;
			break;
		}
	}
	if (removalStudentIndex != -1) {
		for (int i = removalStudentIndex; i < size - 1; i++) {
			classRoster[i] = classRoster[i + 1];
		}
		classRoster[size - 1] = Student(); // Clear the last element
		std::cout << "Student ID " << studentID << " removed successfully.\n";
	} else {
		std::cout << "Student ID " << studentID << " not found.\n";
	}
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram, Student* classRoster, int size) {
	for (int i = 0; i < size; i++) {
		if (classRoster[i].degreeProgram == degreeProgram) {
			classRoster[i].accessor();
		}
	}
}

void Roster::destructor(Student* classRoster) {
	delete[] classRoster;
}
