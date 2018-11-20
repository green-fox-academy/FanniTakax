#ifndef INC_01_GREENFOXORG_STUDENT_H
#define INC_01_GREENFOXORG_STUDENT_H

#include "person.h"

class Student : public Person {
public:
    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);
    Student();

    void getGoal() override;
    void introduce() override;
    int skipDays(int numberOfDays);

protected:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //INC_01_GREENFOXORG_STUDENT_H
