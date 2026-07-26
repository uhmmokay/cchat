#include "default.h"
#include "chat.h"
#include "file.h"
#include <cstdint>

int main ()
{
    introduction();
    std::uint16_t x {whatDoYouWant()};
    switch (x)
    {
        case 0:
        {
            std::uint16_t port {getPort()};
            std::string pass {getPass()};
            createRoom(port, pass);
            break;
        }
        case 1:
        {
            std::string ip {getip()}, pass {getPass()};
            std::uint16_t port {getPort()};
            connectTo(ip, port, pass);
            break;
        }
        case 2:
        {
            std::string ip {getip()}, pass {getPass()}, toDir {getPwd()};
            std::uint16_t port {getPort()};
            createFileListener(ip, pass, port, toDir);
            break;
        }
        case 3:
        {
            std::string pass {getPass()}, Dir {getPwd()};
            std::uint16_t port {getPort()};
            createFileDropper(pass, port, Dir);
            break;
        }
    }

}