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
};
