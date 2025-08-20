#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
//#include "student.cpp"
#include "roster.h"

class Roster {
public:
	Student classRosterArray[];
	void rosterParserArray(string studentData[]) {
		int size = sizeof(studentData);
		for (int i = 0; i < size; i++) {
			string line = studentData[i];
			int linesize = sizeof(line);
			Student studentArray[];
			string dataEntry = "";
			for (int j = 0; j < linesize; j++) {
				if (line[j] == ',') {
					studentArray.add(dataEntry);
					dataEntry = "";
				}
				else {
					dataEntry += line[j];
				}
			}
			Student student = studentArray; // Is this backwards?
			/*student.studentID = studentArray[0];
			student.firstName = studentArray[1];
			student.lastName = studentArray[2];
			student.email = studentArray[3];
			student.age = std::stoi(studentArray[4]);
			student.daysInCourse[0] = std::stoi(studentArray[5]);
			student.daysInCourse[1] = std::stoi(studentArray[6]);
			student.daysInCourse[2] = std::stoi(studentArray[7]);
			if (studentArray[8] == "SECURITY") {
				student.degreeProgram = DegreeProgram::degree1;
			}
			else if (studentArray[8] == "NETWORK") {
				student.degreeProgram = DegreeProgram::degree2;
			}
			else if (studentArray[8] == "SOFTWARE") {
				student.degreeProgram = DegreeProgram::degree3;
			}
			classRosterArray[sizeof(classRosterArray)] = student;*/
		}
	}
	
	void add(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], DegreeProgram degreeProgram) {
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
	void remove(string studentID) {
		for (Student student : classRosterArray) {
			if (student.studentID == studentID) {
				std::cout << "Removing student with ID: " << studentID << "\n";
				classRosterArray.erase(student);
				return;
			}
		}
		//for (auto it = classRosterArray.begin(); it != classRosterArray.end(); ++it) {
		//	if (it->studentID == studentID) {
		//		classRosterArray.erase(it);
		//		return;
		//	}
		//}
		std::cout << "Student ID " << studentID << " not found.\n";
	}
	void printAll() {
		for (Student student : classRosterArray) {
			student.accessor();
		}
	}
	void printAverageDaysInCourse(string studentID) {
		for (const auto& student : classRosterArray) {
			if (student.studentID == studentID) {
				double average = (student.daysInCourse[0] + student.daysInCourse[1] + student.daysInCourse[2]) / 3.0;
				std::cout << "Average days in course for " << studentID << ": " << average << "\n";
				return;
			}
		}
		std::cout << "Student ID " << studentID << " not found.\n";
	}
	void printInvalidEmails() {
		for (const auto& student : classRosterArray) {
			if (student.email.find('@') == std::string::npos || student.email.find('.') == std::string::npos || student.email.find(' ') != std::string::npos) {
				std::cout << "Invalid email: " << student.email << "\n";
			}
		}
	}
	void printByDegreeProgram(DegreeProgram degreeProgram) {
		for (const auto& student : classRosterArray) {
			if (student.degreeProgram == degreeProgram) {
				student.accessor();
			}
		}
	}
	void destructor() {
		delete[] classRosterArray;
	}
};
