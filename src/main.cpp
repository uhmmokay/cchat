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
            createRoom(port);
            break;
        }
        case 1:
        {
            std::string ip {getip()};
            std::uint16_t port {getPort()};
            connectTo(ip, port);
            break;
        }
        case 2:
        {
            std::string ip {getip()}, toDir {getPwd()};
            std::uint16_t port {getPort()};
            createFileListener(ip, port, toDir);
            break;
        }
        case 3:
        {
            std::string Dir {getPwd()};
            std::uint16_t port {getPort()};
            createFileDropper(port, Dir);
            break;
        }
    }

}