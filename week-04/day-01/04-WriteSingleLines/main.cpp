#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line
    // Or a poem :)

    std::ofstream writeLines;
    writeLines.open("write_lines.txt");
    writeLines << "TIM BURTON Rimborton\nHalloween estejen,\nhogy elvegyuljon a tobbiek kozott,\nosztrigasrac embernek oltozott.";

    return 0;
}