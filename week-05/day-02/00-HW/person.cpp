//
// Created by malajabi on 11/19/2018.
//

#include "person.h"

Person::Person(const std::string &name, int age, const std::string &gender) : _name(name), _age(age), _gender(gender) {}
Person::Person(){
    _name = "Jane Doe";
    _age = 30;
    _gender = "female";
}

const std::string &Person::getName() const {
    return _name;
}

int Person::getAge() const {
    return _age;
}

const std::string &Person::getGender() const {
    return _gender;
}

void Person::introduce(Person person){
    std::cout << "Hi, my name is " << person.getName() << ", a " << person.getAge() << " year old " << person.getGender() << "." << std::endl;
}

void Person::getGoal(){
    std::cout << "My goal is to live for the moment" << std::endl;
}
