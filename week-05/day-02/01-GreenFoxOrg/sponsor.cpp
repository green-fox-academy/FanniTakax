#include "sponsor.h"

Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company) : Person(name, age,
                                                                                                       gender),
                                                                                                _company(company) {
    _hiredStudents = 0;
}

Sponsor::Sponsor() {
    _company = "Google";
    _hiredStudents = 0;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

void Sponsor::introduce()  {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << " who represents " << _company <<
                " and hired " << _hiredStudents << " students so far." << std::endl;
}

int Sponsor::hire(){
    _hiredStudents++;
    return _hiredStudents;
}

