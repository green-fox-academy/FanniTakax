#include "person.h"
#include <iostream>

Person::Person(std::string name, int age, Gender gender) : _name(name), _age(age), _gender(gender) {}
Person::Person(){
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
}

const std::string &Person::getName() const {
    return _name;
}

int Person::getAge() const {
    return _age;
}

Gender Person::getGender() const {
    return _gender;
}

std::string Person::genderToString(){
    if(_gender == Gender::FEMALE){
        return "female";
    }else{
        return "male";
    }
}

void Person::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << "." << std::endl;
}

void Person::getGoal(){
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

