#include <iostream>

#include "post_it.h"

int main() {

    PostIt postIt01("blue", "no me sirve: ", "black");
    PostIt postIt02("green", "- no ver los ojos de mi gente.", "black");
    PostIt postIt03("yellow", "- vivir en el latico de mi mente.", "black");
    PostIt postIt04("pink", "- dominar.", "black");
    PostIt postIt05("green", "- tener dueno.", "black");
    PostIt postIt06("blue", "- si no se esta alineando con mi sueno.", "black");

    std::cout << postIt01.getText() << std::endl;
    std::cout << postIt02.getText() << std::endl;
    std::cout << postIt03.getText() << std::endl;
    std::cout << postIt04.getText() << std::endl;
    std::cout << postIt05.getText() << std::endl;
    std::cout << postIt06.getText() << std::endl;



    return 0;
}