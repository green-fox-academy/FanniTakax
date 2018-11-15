#include <iostream>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.
std::string letterChange(std::string text);

int main() {

    std::string text = "This is a text oxoxoxoxoxoxoxox";
    std::string text2 = "These are words without that letter u know";
    std::string text3 = " xoxoxo <<<--- if this is yoyoyo, than this recursive function is working.";

    std::cout << letterChange(text) << std::endl;
    std::cout << letterChange(text2) << std::endl;
    std::cout << letterChange(text3) << std::endl;


    return 0;
}

std::string letterChange(std::string text){

    std::string from = "x";
    int start_pos = text.find(from);
    if(text.find(from) != std::string::npos){
        return letterChange(text.replace(start_pos, from.length(), "y"));
    }else{
        return text;
    }
}