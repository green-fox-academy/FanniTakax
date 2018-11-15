//
// Created by malajabi on 11/13/2018.
//

#ifndef INC_01_POSTIT_POST_IT_H
#define INC_01_POSTIT_POST_IT_H

#include <iostream>

class PostIt
{
public:
    PostIt(std::string backgroundColor, std::string text, std::string textColor);
    std::string getBackgroundColor();
    std::string getText();
    std::string getTextColor();
private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;
};


#endif //INC_01_POSTIT_POST_IT_H
