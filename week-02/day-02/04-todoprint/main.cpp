#include <iostream>
#include <string>

int main(int argc, char* args[])
{


    std::string todoText = " - Buy milk\n";

    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indention

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    std::string myTodo = "My todo:\n";
    std::string downGame = " - Download games\n";
    std::string diablo = "\t- Diablo";

    todoText.insert(0, myTodo);
    todoText.append(downGame);
    todoText.append(diablo);

    std::cout << todoText << std::endl;

    return 0;
}