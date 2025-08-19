//#pragma once
//
//#include <string>
//enum class DegreeProgram {
//	SECURITY,
//	NETWORK,
//	SOFTWARE
//};
//inline std::string degreeProgramToString(DegreeProgram degree) {
//	switch (degree) {
//		case DegreeProgram::SECURITY: return "SECURITY";
//		case DegreeProgram::NETWORK: return "NETWORK";
//		case DegreeProgram::SOFTWARE: return "SOFTWARE";
//		default: return "UNKNOWN";
//	}
//}
//inline DegreeProgram stringToDegreeProgram(const std::string& degreeStr) {
//	if (degreeStr == "SECURITY") return DegreeProgram::SECURITY;
//	else if (degreeStr == "NETWORK") return DegreeProgram::NETWORK;
//	else if (degreeStr == "SOFTWARE") return DegreeProgram::SOFTWARE;
//	else throw std::invalid_argument("Invalid degree program string");
//}
//inline std::ostream& operator<<(std::ostream& os, DegreeProgram degree) {
//	return os << degreeProgramToString(degree);
//}
//inline std::istream& operator>>(std::istream& is, DegreeProgram& degree) {
//	std::string degreeStr;
//	is >> degreeStr;
//	degree = stringToDegreeProgram(degreeStr);
//	return is;
//}
//inline std::string degreeProgramToString(int degree) {
//	switch (degree) {
//		case 0: return "SECURITY";
//		case 1: return "NETWORK";
//		case 2: return "SOFTWARE";
//		default: return "UNKNOWN";
//	}
//}
//inline int stringToDegreeProgram(const std::string& degreeStr) {
//	if (degreeStr == "SECURITY") return 0;
//	else if (degreeStr == "NETWORK") return 1;
//	else if (degreeStr == "SOFTWARE") return 2;
//	else throw std::invalid_argument("Invalid degree program string");
//}
//inline std::ostream& operator<<(std::ostream& os, int degree) {
//	return os << degreeProgramToString(degree);
//}
//	else if (degreeChoice == 2) {
//				degreeProgram = DegreeProgram::NETWORK;
//			} else if (degreeChoice == 3) {
//				degreeProgram = DegreeProgram::SOFTWARE;
//			} else {
//				throw std::invalid_argument("Invalid degree program choice");
//			}
//		}
//	}
//};
//inline std::istream& operator>>(std::istream& is, int& degree) {
//	std::string degreeStr;
//	is >> degreeStr;
//	degree = stringToDegreeProgram(degreeStr);
//	return is;
//}
//inline std::string degreeProgramToString(int degree) {
//	switch (degree) {
//		case 0: return "SECURITY";
//		case 1: return "NETWORK";
//		case 2: return "SOFTWARE";
//		default: return "UNKNOWN";
//	}
//}
//inline int stringToDegreeProgram(const std::string& degreeStr) {
//	if (degreeStr == "SECURITY") return 0;
//	else if (degreeStr == "NETWORK") return 1;
//	else if (degreeStr == "SOFTWARE") return 2;
//	else throw std::invalid_argument("Invalid degree program string");
//}
//inline std::ostream& operator<<(std::ostream& os, DegreeProgram degree) {
//	return os << degreeProgramToString(degree);
//}
//inline std::istream& operator>>(std::istream& is, DegreeProgram& degree) {
//	std::string degreeStr;
//	is >> degreeStr;
//	degree = stringToDegreeProgram(degreeStr);
//	return is;
//}
//inline std::ostream& operator<<(std::ostream& os, int degree) {
//	return os << degreeProgramToString(degree);
//}
//inline std::istream& operator>>(std::istream& is, int& degree) {
//	std::string degreeStr;
//	is >> degreeStr;
//	degree = stringToDegreeProgram(degreeStr);
//	return is;
//}
//inline std::string degreeProgramToString(int degree) {
//	switch (degree) {
//		case 0: return "SECURITY";
//		case 1: return "NETWORK";
//		case 2: return "SOFTWARE";
//		default: return "UNKNOWN";
//	}
//}
//inline int stringToDegreeProgram(const std::string& degreeStr) {
//	if (degreeStr == "SECURITY") return 0;
//	else if (degreeStr == "NETWORK") return 1;
//	else if (degreeStr == "SOFTWARE") return 2;
//	else throw std::invalid_argument("Invalid degree program string");
//}
//inline std::ostream& operator<<(std::ostream& os, DegreeProgram degree) {
//	return os << degreeProgramToString(degree);
//}
//inline std::istream& operator>>(std::istream& is, DegreeProgram& degree) {
//	std::string degreeStr;
//	is >> degreeStr;
//	degree = stringToDegreeProgram(degreeStr);
//	return is;
//}
//inline std::ostream& operator<<(std::ostream& os, int degree) {
//	return os << degreeProgramToString(degree);
//}
//inline std::istream& operator>>(std::istream& is, int& degree) {
//	std::string degreeStr;
//	is >> degreeStr;
//	degree = stringToDegreeProgram(degreeStr);
//	return is;
//}
////#pragma once
////#include <iostream>
////#include <string>
////#include <stdexcept>
////#include "degree.h"
////#include "student.h"
////#include "roster.h"
////#include "roster.cpp"
////#include "student.cpp"
////#include "degree.h"
////#include "student.h"
////#include "degree.cpp"
////#include "student.cpp"