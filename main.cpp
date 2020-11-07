// NOTE: this works on Linux Mint 19.3... You may need to modify it to work on a non-Linux OS
#include <iostream>
#include "Color.h"

//gets user input
void getInput(std::string username, std::string message = "", Color::Modifier userColor = (Color::FG_BLUE), Color::Modifier defColor = (Color::FG_DEFAULT)){
    std::string temp;
    std::cout << userColor << username << " " << defColor << message;
    
    getline(std::cin, temp);
}

// displays messages
void showMessage(std::string username, std::string message, bool endLine = false, Color::Modifier userColor = (Color::FG_BLUE), Color::Modifier defColor = (Color::FG_DEFAULT)){
    if (endLine){
        std::cout << userColor << username << " " << defColor << message << std::endl;
    }else{
        std::cout << userColor << username << " " << defColor << message;
    }
}

int main(int argc, char const *argv[])
{
    system("echo off"); // so it doesn't repeat system commands
    system("clear"); // cls in windows 

    // allow us to change the color of the output
    Color::Modifier blue(Color::FG_BLUE);
    Color::Modifier def(Color::FG_DEFAULT);

    std::string username = "eternm##$:";
    std::string connectedUsername = username + "BKUW300PS345672:";

    std::cout << "\t\tWelcome to your terminal." << std::endl;

    getInput(username);
    getInput(username);

    showMessage(connectedUsername, "  4 root     0  0    87456    14m  11m  S  0.0  3.0 0:00.55 termial", true);
    showMessage(connectedUsername, "  1772 root  0  -20  2415     2016 1312 S  0.0  0.5 0:00.17 init", true);
    showMessage(connectedUsername, "  1 root     0  0    0        0    0    S  0.0  1.2 0:00.00 cpuset    ./01dat", true);
    showMessage(connectedUsername, "  29 root    0  0    0        0    0    S  0.0  5.0 0:00.00 evilcorpwdthread", true);
    showMessage(connectedUsername, "  4098 root  0  0    0        0    0    S  0.0  0.4 0:00.05 evilcorpwdthread/0:0", true);
    showMessage(connectedUsername, "  19 root    0  0    0        0    0    S  0.0  0.9 0:00.90 evilcorpwdthread/u:0", true);
  
    getInput(connectedUsername);
    showMessage(username, "Logout...", true);
    
    getInput(username);
    getInput(username, "You are about to hack the govenment... Continue? [y/n]: ");

    for (int i = 0; i <= 100; i+=20){
        std::cout << blue << username << " " << def << "Hacking user... " << i << "%" << std::endl;
        system("sleep 1");
    }

    getInput(username);

    return 0;
}
