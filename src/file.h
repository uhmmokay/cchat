#pragma once
#include "default.h"

void createFileListener(std::string ip, std::string pass, std::uint16_t port, std::string toDir);
void createFileDropper(std::string pass, std::uint16_t port, std::string Dir);