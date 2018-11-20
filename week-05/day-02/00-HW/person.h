//
// Created by malajabi on 11/19/2018.
//

#ifndef INC_00_HW_PERSON_H
#define INC_00_HW_PERSON_H

#include <iostream>


class Person {
public:
    Person(const std::string &name, int age, const std::string &gender);
    Person();


public:

private:
    std::string _name;
    int _age;
    std::string _gender;
public:
    const std::string &getName() const;

    int getAge() const;

    const std::string &getGender() const;

    void introduce(Person person);
    void getGoal();
};




#endif //INC_00_HW_PERSON_H
