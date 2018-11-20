#ifndef INC_01_GREENFOXORG_MENTOR_H
#define INC_01_GREENFOXORG_MENTOR_H

#include "person.h"

enum class Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor(const std::string &name, int age, Gender gender, Level level);
    Mentor();

    std::string levelToString();

    void getGoal() override;
    void introduce() override;

public:

protected:
    Level _level;
};


#endif //INC_01_GREENFOXORG_MENTOR_H
