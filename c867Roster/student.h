#include <iostream>

enum class DegreeProgram {
	degree1 = "SECURITY",
	degree2 = "NETWORK",
	degree3 = "SOFTWARE"
};

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
				  << static_cast<std::string>(degreeProgram) 
				  << "\n";
	}

	mutator() {
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
				degreeProgram = DegreeProgram::degree1;
				break;
			case 2:
				degreeProgram = DegreeProgram::degree2;
				break;
			case 3:
				degreeProgram = DegreeProgram::degree3;
				break;
			default:
				std::cout << "Invalid choice. Defaulting to SECURITY.\n";
				degreeProgram = DegreeProgram::degree1;
				break;
		}
	}

	constructor() {
		studentID = "";
		firstName = "";
		lastName = "";
		email = "";
		age = 0;
		for (int i = 0; i < 3; ++i) {
			daysInCourse[i] = 0;
		}
		degreeProgram = DegreeProgram::degree1; // Default to SECURITY
	}

	printer() {
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
			<< static_cast<std::string>(degreeProgram)
			<< "\n";
		std::cout << studentID << "\t First Name: " << firstName << "\t Last Name: " << lastName << "\t Email: " << email << "\t Age: " << age << "\t daysInCourse: " << daysInCourse[3] << "\t Degree Program: " << degreeProgram << "\n";
	}
};
