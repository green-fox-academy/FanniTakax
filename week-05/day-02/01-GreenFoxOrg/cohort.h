#ifndef INC_01_GREENFOXORG_COHORT_H
#define INC_01_GREENFOXORG_COHORT_H

#include <iostream>
#include <vector>
#include "student.h"
#include "mentor.h"

class Cohort {
public:
    Cohort(const std::string &name);

    void info();
    std::vector<Student> addStudent(Student* student);
    std::vector<Mentor> addMentor(Mentor* mentor);




protected:
    std::string _name;
    std::vector<Student> _students;
    std::vector<Mentor> _mentors;
};


#endif //INC_01_GREENFOXORG_COHORT_H
