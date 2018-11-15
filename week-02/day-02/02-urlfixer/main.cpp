#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    std::string from = "bots";

    int startP = url.find(from);

    if (startP == std::string::npos) {
        std::cout << "Cannot Replace" << std::endl;
    } else{
        url.replace(startP, from.length(), "odds");
    }


    // Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
    // Also, the URL is missing a crucial component, find out what it is and insert it too!

    url.insert(5, ":");

    std::cout << url << std::endl;

    return 0;
}