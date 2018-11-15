#include <iostream>
#include <fstream>
#include <string>
#include <vector>

  // Read all data from 'log.txt'.
  // Each line represents a log message from a web server
  // Write a function that returns an array with the unique IP adresses.
  // Write a function that returns the GET / POST request ratio.

std::vector<std::string> addressesIp(std::string filename);
double getPostRatio(std::string fileName);

int main() {

    addressesIp("log.txt");
    getPostRatio("log.txt");

    return 0;
}

std::vector<std::string> addressesIp(std::string filename)
{
    std::ifstream file(filename);
    std::string something;
    std::string IP;
    std::string getPost;
    std::vector<std::string> allIP;
    int counter = 0;
    if(file.is_open()) {
        while(file >> something >> something >> something >> something >> something >> IP >> getPost >> something){
            allIP.push_back(IP);
        }
        for(int i = 0; i < allIP.size(); i++) {
            counter += 1;
        }
        std::cout << counter << std::endl;
    }else{
        std::cout << "Couldn't open file" << std::endl;
    }
    file.close();

    return allIP;
}

double getPostRatio(std::string fileName){
    std::ifstream file(fileName);
    std::string something;
    std::string getPost;
    double getpostRatio;
    double counterGet = 0;
    double counterPost = 0;
    if(file.is_open()) {
        while(file >> something >> something >> something >> something >> something >> something >> getPost >> something){
            if(getPost == "GET"){
                counterGet += 1;
            }else if(getPost == "POST"){
                counterPost += 1;
            }
        }
        getpostRatio = counterGet / counterPost;
        std::cout << getpostRatio << std::endl;
    }else{
        std::cout << "Couldn't open file" << std::endl;
    }
    file.close();
    return getpostRatio;
}

