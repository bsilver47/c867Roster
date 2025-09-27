#include <iostream>
#include "degree.h"
# pragma once
using namespace std;

string degreeProgramToString(DegreeProgram degree);

class Student {
public:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysInCourse[3];
	DegreeProgram degreeProgram;

	void accessor () {
		std::cout << "Student ID: " << studentID << "\n";
		std::cout << "First Name: " << firstName << "\n";
		std::cout << "Last Name: " << lastName << "\n";
		std::cout << "Email: " << email << "\n";
		std::cout << "Age: " << age << "\n";
		std::cout << "Days in Course: [" 
				  << daysInCourse[0] << ", "
				  << daysInCourse[1] << ", "
				  << daysInCourse[2] << "]\n";
		std::cout << "Degree Program: " 
				  << degreeProgramToString(degreeProgram)
				  << "\n";
	}

	void mutator() {
		std::cout << "Enter Student ID: ";
		std::cin >> studentID;
		std::cout << "Enter First Name: ";
		std::cin >> firstName;
		std::cout << "Enter Last Name: ";
		std::cin >> lastName;
		std::cout << "Enter Email: ";
		std::cin >> email;
		std::cout << "Enter Age: ";
		std::cin >> age;
		std::cout << "Enter Days in Course (3 values): ";
		for (int i = 0; i < 3; ++i) {
			std::cin >> daysInCourse[i];
		}
		int degreeChoice;
		std::cout << "Select Degree Program (1 for SECURITY, 2 for NETWORK, 3 for SOFTWARE): ";
		std::cin >> degreeChoice;
		switch (degreeChoice) {
			case 1:
				degreeProgram = DegreeProgram::SECURITY;
				break;
			case 2:
				degreeProgram = DegreeProgram::NETWORK;
				break;
			case 3:
				degreeProgram = DegreeProgram::SOFTWARE;
				break;
			default:
				std::cout << "Invalid choice. Defaulting to SECURITY.\n";
				degreeProgram = DegreeProgram::SECURITY;
				break;
		}
	}

	void constructor() {
		std::cout << "Enter Student ID: ";
		std::cin >> studentID;
		std::cout << "Enter First Name: ";
		std::cin >> firstName;
		std::cout << "Enter Last Name: ";
		std::cin >> lastName;
		std::cout << "Enter Email: ";
		std::cin >> email;
		std::cout << "Enter Age: ";
		std::cin >> age;
		std::cout << "Enter Days in Course (3 values): ";
		for (int i = 0; i < 3; ++i) {
			std::cin >> daysInCourse[i];
		}
		int degreeChoice;
		std::cout << "Select Degree Program (1 for SECURITY, 2 for NETWORK, 3 for SOFTWARE): ";
		std::cin >> degreeChoice;
		switch (degreeChoice) {
		case 1:
			degreeProgram = DegreeProgram::SECURITY;
			break;
		case 2:
			degreeProgram = DegreeProgram::NETWORK;
			break;
		case 3:
			degreeProgram = DegreeProgram::SOFTWARE;
			break;
		default:
			std::cout << "Invalid choice. Defaulting to SECURITY.\n";
			degreeProgram = DegreeProgram::SECURITY;
			break;
		}
	}

	void printer() {
		std::cout << studentID << "\t First Name: " << firstName << "\t Last Name: " << lastName << "\t Email: " << email << "\t Age: " << age << "\t daysInCourse: " << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "\t Degree Program: " << degreeProgramToString(degreeProgram) << "\n";
	}
};
