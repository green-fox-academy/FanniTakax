#include "cohort.h"
#include "student.h"
#include "mentor.h"
#include <iostream>
#include <vector>

Cohort::Cohort(const std::string &name) : _name(name) {
    _students;
    _mentors;
}

void Cohort::info(){
    std::cout << "The " << _name << " cohort has " << _students.size() << " students and " << _mentors.size() << " mentors." << std::endl;
}

//addStudent(Student*): adds the given Student to students vector
//addMentor(Mentor*): adds the given Mentor to mentors vector

std::vector<Student> Cohort::addStudent(Student* student){
    _students.push_back(*student);
    return _students;
}

std::vector<Mentor> Cohort::addMentor(Mentor* mentor){
    _mentors.push_back(*mentor);
    return _mentors;
}
