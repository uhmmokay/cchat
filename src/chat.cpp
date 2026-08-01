#include "chat.h"
#include <cstdlib>
#include <string>


void createRoom(std::uint16_t port)
{
    if (port < 1023)
    {
        std::system("sudo -v");
        std::string x = "clear && echo Your ip is $(curl ifconfig.me), your port is " + std::to_string(port) + " [SYSTEM]";
        std::system(x.c_str());
        std::cout << "Press enter to start chat:\n";
        ignore();
        std::system("clear");
        std::string createRoomCommand = "sudo ncat -l " + std::to_string(port) + " -k ";
        std::system(createRoomCommand.c_str());
    } else {
        std::string x = "clear && echo Your ip is $(curl ifconfig.me), your port is " + std::to_string(port);
        std::system(x.c_str());
        std::cout << "Press enter to start chat:\n";
        ignore();
        std::system("clear");
        std::string createRoomCommand = "ncat -l " + std::to_string(port);
        std::system(createRoomCommand.c_str());
    }
}

void connectTo(std::string ip, std::uint16_t port)
{
    std::string connectTOCommand = "clear && ncat " + escapeForShell(ip) + " " + std::to_string(port);
    std::system(connectTOCommand.c_str());
}
