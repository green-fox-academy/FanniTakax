#include "mentor.h"
#include <iostream>

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name, age, gender),
                                                                               _level(level) {}

Mentor::Mentor() {
    _level = Level::INTERMEDIATE;
}

std::string Mentor::levelToString(){
    if(_level == Level::JUNIOR){
        return "junior";
    }else if (_level == Level::INTERMEDIATE){
        return "intermediate";
    }else{
        return "senior";
    }
}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce()  {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << " " << levelToString() << " mentor." << std::endl;
}
