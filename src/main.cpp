#include "cchat.h"
#include <cstdint>

signed main ()
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
    }

}