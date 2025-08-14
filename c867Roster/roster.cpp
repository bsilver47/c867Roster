#include <iostream>

class Roster {
	Student classRosterArray[];
	size = sizeof(studentData);

	for (int i = 0; i < size; i++) {
		line = studentData[i];
		linesize = sizeof(line);
		studentArray = [];
		dataEntry = ""
		for (int j=0; j<linesize; j++) {
			if (line[j] == ',') {
				studentArray.append(dataEntry);
				dataEntry = "";
			}
			else {
				dataEntry += line[j];
			}
		}
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
			student.degreeProgram = DegreeProgram::degree1;
		} else if (studentArray[8] == "NETWORK") {
			student.degreeProgram = DegreeProgram::degree2;
		} else if (studentArray[8] == "SOFTWARE") {
			student.degreeProgram = DegreeProgram::degree3;
		}
		// Add the student to the class roster array
		classRosterArray.push_back(student);
	}
};