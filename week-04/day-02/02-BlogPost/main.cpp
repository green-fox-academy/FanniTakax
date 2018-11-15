#include <iostream>

#include "blogpost.h"

int main() {

    BlogPost blogPost01("Neil Gaiman",
                        "HARLAN ELLISON",
                        "\"...to record the person who is playing the actual Voice of God in Good Omens. I had hoped for a long enough trip...\"",
                        "2018.06.29");
    BlogPost blogPost02("Amanda Palmer",
                        "WHEN EVEN YOUR UNDERWEAR DISAPPOINTS YOU",
                        "\"sometimes you land in london...\"",
                        "2018.10.22");
    BlogPost blogPost03("Rekka Toth",
                       "SZABAD VAGY?",
                       "\"Egy vicces es vulgaris Sickratman track nyoman, igazabol ugy tennem fel a kerdest: Szabad-e vagy?\"",
                       "2018.03.28");

    std::cout << blogPost01.getTitle() << "\n" << "by " << blogPost01.getAuthor() << "\n" << blogPost01.getPublicationDate()
                << "\n" << blogPost01.getText() << "\n" << std::endl;
    std::cout << blogPost02.getTitle() << "\n" << "by " << blogPost02.getAuthor() << "\n" << blogPost02.getPublicationDate()
              << "\n" << blogPost02.getText() << "\n" << std::endl;
    std::cout << blogPost03.getTitle() << "\n" << "by " << blogPost03.getAuthor() << "\n" << blogPost03.getPublicationDate()
              << "\n" << blogPost03.getText() << "\n" << std::endl;

    return 0;
}