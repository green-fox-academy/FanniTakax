#ifndef INC_01_GREENFOXORG_SPONSOR_H
#define INC_01_GREENFOXORG_SPONSOR_H

#include <iostream>
#include "person.h"

class Sponsor : public Person{
public:
    Sponsor(const std::string &name, int age, Gender gender, const std::string &company);
    Sponsor();

    void getGoal() override;
    void introduce() override;
    int hire();

public:


protected:
    std::string _company;
    int _hiredStudents;

};


#endif //INC_01_GREENFOXORG_SPONSOR_H
