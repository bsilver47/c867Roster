#pragma once
#include <string>
#include "student.h"
using std::string;

class Roster {
public:
    Student* rosterParserArray(string studentData[], int size);
    void printAll(Student* classRoster, int size);
    void printAverageDaysInCourse(string studentID, Student* classRoster, int size);
    void printInvalidEmails(Student* classRoster, int size);
    void remove(string studentID, Student* classRoster, int size);
    void printByDegreeProgram(DegreeProgram degreeProgram, Student* classRoster, int size);
    void destructor(Student* classRoster);
};
