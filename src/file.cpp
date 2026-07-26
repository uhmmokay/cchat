#include "file.h"
#include "default.h"
#include <string>

void createFileListener(std::string ip, std::string pass, std::uint16_t port, std::string toDir)
{
    std::string cFL = "clear && echo 'Sending...' && cryptcat -k " 
        + escapeForShell(pass) 
        + " -w 3 " 
        + escapeForShell(ip) 
        + " " + std::to_string(port) 
        + " < " + escapeForShell(toDir);
    std::system(cFL.c_str());
}

void createFileDropper(std::string pass, std::uint16_t port, std::string Dir)
{

    std::string x = "sudo -v && clear && echo Your ip is $(curl ifconfig.me), your port is " + std::to_string(port) + ", pass: " + pass;
    std::system(x.c_str());
    std::cout << "Press enter...\n";
    ignore();
    std::string cFD = "clear && echo 'Dropping file...' && cryptcat -l -p " 
        + std::to_string(port) 
        + " -k " + escapeForShell(pass) 
        + " > " + escapeForShell(Dir);
    std::system(cFD.c_str());
}

