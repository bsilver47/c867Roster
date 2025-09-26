#pragma once
#include <string>
#include "student.h"
using std::string;

class Roster {
public:
	Student* studentArray = nullptr;
    Student* rosterParserArray(string studentData[], int size);
    void printAll(int size);
    void printAverageDaysInCourse(string studentID, int size);
    void printInvalidEmails(int size);
    void remove(string studentID, int size);
    void printByDegreeProgram(DegreeProgram degreeProgram);
    void destructor(Student* classRoster);
};
