#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

class Roster {
public:
	Student classRoster[5];

	void add(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], DegreeProgram degreeProgram, Student classRosterArray[]) {
		Student student;
		student.studentID = studentID;
		student.firstName = firstName;
		student.lastName = lastName;
		student.email = email;
		student.age = age;
		for (int i = 0; i < 3; i++) {
			student.daysInCourse[i] = daysInCourse[i];
		}
		student.degreeProgram = degreeProgram;
		classRosterArray[sizeof(classRosterArray)] = student;
	}
	void remove(string studentID, Student classRoster[]) {
		int removalStudentIndex = -1;
		for (int i = 0; i < sizeof(classRoster); i++) {
			if (studentID == classRoster->studentID) {
				std::cout << "Found student to be removed, preparing removal now";
				removalStudentIndex = i;
				break;
			}
		}
		if (removalStudentIndex != -1) {
			for (int i=removalStudentIndex; i < sizeof(classRoster) - 1; i++) {
				classRoster[i] = classRoster[i + 1];
			}
			classRoster[sizeof(classRoster) - 1] = Student(); // Clear the last element
			std::cout << "Student ID " << studentID << " removed successfully.\n";
		} else {
			std::cout << "Student ID " << studentID << " not found.\n";
		}
	}
	Student* rosterParserArray(string studentData[]) {
		Student classRosterArray[sizeof(studentData)];
		int size = sizeof(studentData);
		for (int i = 0; i < size; i++) {
			string line = studentData[i];
			int linesize = sizeof(line);
			string studentArray[9];
			string dataEntry = "";
			for (int j = 0; j < linesize; j++) {
				if (line[j] == ',' || linesize == j - 1) {
					studentArray[j] = dataEntry;
					dataEntry = "";
				}
				else {
					dataEntry += line[j];
				}
			}
			//Student student = studentArray; // Is this backwards?
			Student student;
			student.studentID = studentArray[0];
			student.firstName = studentArray[1];
			student.lastName = studentArray[2];
			student.email = studentArray[3];
			student.age = std::stoi(studentArray[4]);
			student.daysInCourse[0] = std::stoi(studentArray[5]);
			student.daysInCourse[1] = std::stoi(studentArray[6]);
			student.daysInCourse[2] = std::stoi(studentArray[7]);
			if (studentArray[8] == "SECURITY") {
				student.degreeProgram = DegreeProgram::SECURITY;
			}
			else if (studentArray[8] == "NETWORK") {
				student.degreeProgram = DegreeProgram::NETWORK;
			}
			else if (studentArray[8] == "SOFTWARE") {
				student.degreeProgram = DegreeProgram::SOFTWARE;
			}
			classRosterArray[sizeof(classRosterArray)] = student;
		}
		return classRosterArray;
	}
	

	void printAll(Student* classRoster) {
		for (int i = 0; i < sizeof(classRoster); i++) {
			classRoster[i].accessor();
		}
	}
	void printAverageDaysInCourse(string studentID, Student* classRoster) {
		for (int i = 0; i < sizeof(classRoster); i++) {
			if (classRoster[i].studentID == studentID) {
				double average = (classRoster[i].daysInCourse[0] + classRoster[i].daysInCourse[1] + classRoster[i].daysInCourse[2]) / 3.0;
				std::cout << "Average days in course for " << studentID << ": " << average << "\n";
				return;
			}
		}
		std::cout << "Student ID " << studentID << " not found.\n";
	}
	void printInvalidEmails(Student* classRoster) {
		for (int i = 0; i < sizeof(classRoster); i++) {
			if (classRoster[i].email.find('@') == std::string::npos || classRoster[i].email.find('.') == std::string::npos || classRoster[i].email.find(' ') != std::string::npos) {
				std::cout << "Invalid email: " << classRoster[i].email << "\n";
			}
		}
	}
	void printByDegreeProgram(DegreeProgram degreeProgram, Student* classRoster) {
		for (int i = 0; i < sizeof(classRoster); i++) {
			if (classRoster[i].degreeProgram == degreeProgram) {
				classRoster[i].accessor();
			}
		}
	}
	Student* destructor(Roster rosterClass, Student classRoster[]) {
		delete[] classRoster;
		return classRoster = nullptr;
		//delete[] rosterClass;
	}
};
