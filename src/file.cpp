#include "file.h"
#include "default.h"
#include <string>

void createFileListener(std::string ip, std::uint16_t port, std::string toDir)
{
    std::string cFL = "clear && echo 'Sending...' && ncat " 
        + escapeForShell(ip) 
        + " " + std::to_string(port) 
        + " < " + escapeForShell(toDir);
    std::system(cFL.c_str());
}

void createFileDropper(std::uint16_t port, std::string Dir)
{

    std::string x = "clear && echo Your ip is $(curl ifconfig.me), your port is " + std::to_string(port);
    std::system(x.c_str());
    std::cout << "Press enter...\n";
    ignore();
    std::string cFD = "clear && echo 'Dropping file...' && ncat -l " 
        + std::to_string(port) 
        + " > " + escapeForShell(Dir);
    std::system(cFD.c_str());
}

