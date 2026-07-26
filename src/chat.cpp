#include "chat.h"
#include <cstdlib>
#include <string>


void createRoom(std::uint16_t port, std::string pass)
{
    if (port < 1023)
    {
        std::system("sudo -v");
        std::string x = "clear && echo Your ip is $(curl ifconfig.me), your port is " + std::to_string(port) + " [SYSTEM], pass: " + pass;
        std::system(x.c_str());
        std::cout << "Press enter to start chat:\n";
        ignore();
        std::system("clear");
        std::string createRoomCommand = "sudo cryptcat -l -p " + std::to_string(port) + " -k " + escapeForShell(pass);
        std::system(createRoomCommand.c_str());
    } else {
        std::string x = "clear && echo Your ip is $(curl ifconfig.me), your port is " + std::to_string(port) + ", pass: " + pass;
        std::system(x.c_str());
        std::cout << "Press enter to start chat:\n";
        ignore();
        std::system("clear");
        std::string createRoomCommand = "cryptcat -l -p " + std::to_string(port) + " -k " + escapeForShell(pass);
        std::system(createRoomCommand.c_str());
    }
}

void connectTo(std::string ip, std::uint16_t port, std::string pass)
{
    std::string connectTOCommand = "clear && cryptcat -k " + escapeForShell(pass) + " " + escapeForShell(ip) + " " + std::to_string(port);
    std::system(connectTOCommand.c_str());
}
