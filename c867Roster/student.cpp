#include "student.h"

string degreeProgramToString(DegreeProgram degree) {
	switch (degree) {
	case DegreeProgram::SECURITY: return "SECURITY";
	case DegreeProgram::NETWORK: return "NETWORK";
	case DegreeProgram::SOFTWARE: return "SOFTWARE";
	default: return "UNKNOWN";
	}
}
