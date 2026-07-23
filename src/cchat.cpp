#include <limits>
#include "cchat.h"
#include <cstdlib>
#include <string>

void ignore()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

std::string escapeForShell(const std::string& str) {
    std::string escaped = "'";
    for (char c : str) {
        if (c == '\'') {
            escaped += "'\\''";
        } else {
            escaped += c;
        }
    }
    escaped += "'";
    return escaped;
}

std::uint16_t getValue(std::string msg, std::string errorMsg)
{
    std::cout << msg;
    std::uint16_t x {};
    std::cin >> x;

    if (std::cin.fail())
    {
        std::cin.clear();
        ignore();
        std::cerr << errorMsg;
        exit(1);
    }
    
    ignore();

    return x;
}

std::string getString(std::string msg, std::string errorMsg)
{
    std::cout << msg;
    std::string x {};
    std::getline(std::cin >> std::ws, x);

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cerr << errorMsg;
        exit(1);
    }

    return x;
}

void introduction()
{
    std::system("clear");
    std::cout << "Hello! This is a 'cchat'. \n\033[32mYou can get more documentation on 'https://github.com/uhmmokay/cchat'.\033[0m\nThis program uses 'cryptcat'\n";
}



std::uint16_t whatDoYouWant()
{
    while (true)
    {
    std::cout << "Please choose what you want to do: \n";
    std::cout << "1) Create local server for chatting.\n";
    std::cout << "2) Connect to another server for chatting.";
    std::uint16_t x {getValue("\n", "Incorrent symbol. Exiting...\n")};
    switch (x)
    {
        case 1:
            return 0;
        case 2:
            return 1;
        default:
            std::system("clear");
            std::cout << "Oops! Enter correct value (1/2)!\n";
            continue;
    }
    }
}

std::string getip()
{
    std::string ip {getString("Enter an ip you want to connect to: ", "Invalid value. Exiting...\n")};
    std::cout << "\nConnecting...";
    return ip;
}

std::uint16_t getPort()
{
    std::uint16_t port {getValue("Enter the port you want to use: ", "Invalid value. Exiting...\n")};
    std::cout << "\n...\n";
    if (port < 1023)
    {
        std::cout << "Warning! You are using system port.\nThis action requires sudo.\n";
    }
    return port;
}

std::string getPass()
{
    std::string pass {getString("Enter Secret Key: ", "Invalid value. Exiting...")};
    return pass;
}

void createRoom(std::uint16_t port, std::string pass)
{
    if (port < 1023)
    {
        std::system("sudo -v");
        std::string x = "clear && echo Your ip is $(curl ifconfig.me), your port is " + std::to_string(port) + " [SYSTEM], pass: " + pass;
        std::system(x.c_str());
        std::string createRoomCommand = "sudo cryptcat -l -p " + std::to_string(port) + " -k " + escapeForShell(pass);
        std::system(createRoomCommand.c_str());
    } else {
        std::string x = "clear && echo Your ip is $(curl ifconfig.me), your port is " + std::to_string(port) + ", pass: " + pass;
        std::system(x.c_str());
        std::string createRoomCommand = "cryptcat -l -p " + std::to_string(port) + " -k " + escapeForShell(pass);
        std::system(createRoomCommand.c_str());
        std::system(createRoomCommand.c_str());
    }
}

void connectTo(std::string ip, std::uint16_t port, std::string pass)
{
    std::string connectTOCommand = "cryptcat -k " + escapeForShell(pass) + " " + escapeForShell(ip) + " " + std::to_string(port);
    std::system(connectTOCommand.c_str());
}