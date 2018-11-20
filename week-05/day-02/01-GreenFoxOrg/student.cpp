#include "student.h"
#include <iostream>

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization) : Person(
        name, age, gender), _previousOrganization(previousOrganization) {
    _skippedDays = 0;
}

Student::Student(){
    _previousOrganization = "School Of Life";
    _skippedDays = 0;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce()  {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << " from "
                << _previousOrganization << ", who skipped " << _skippedDays << " days from the course already." << std::endl;
}

int Student::skipDays(int numberOfDays){
    _skippedDays += numberOfDays;
    return _skippedDays;
}
