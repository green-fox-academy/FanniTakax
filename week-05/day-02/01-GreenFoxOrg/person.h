#ifndef INC_01_GREENFOXORG_PERSON_H
#define INC_01_GREENFOXORG_PERSON_H

#include <iostream>

enum class Gender{
    MALE,
    FEMALE
};

class Person {
public:
    Person(std::string name, int age, Gender gender );
    Person();

    const std::string &getName() const;
    int getAge() const;
    Gender getGender() const;

    std::string genderToString();
    virtual void getGoal();
    virtual void introduce();

protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //INC_01_GREENFOXORG_PERSON_H
