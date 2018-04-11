#include "Student.h"
#include <sstream>

Student::Student(int perm, 
		 std::string lastName, 
		 std::string firstAndMiddleNames) {
  this->perm=perm;
  this->lastName=lastName;
  this->firstAndMiddleNames=firstAndMiddleNames;
}

int Student::getPerm() const { 
  return perm;
}

std::string Student::getLastName() const { 
  return lastName;
}

std::string Student::getFirstAndMiddleNames() const { 
  return firstAndMiddleNames;
}

std::string Student::getFullName() const {
  std::ostringstream oss;
  oss << this->getFirstAndMiddleNames() << " " << this->getLastName();
				return oss.str();
}

std::string Student::toString() const {  
  std::ostringstream oss;
  
  oss << "[" 
      << this->getPerm() << ","
      << this->getLastName() << ","
      << this->getFirstAndMiddleNames() << "]";
  return oss.str();
} 

