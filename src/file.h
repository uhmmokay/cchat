#pragma once
#include "default.h"

void createFileListener(std::string ip, std::uint16_t port, std::string toDir);
void createFileDropper(std::uint16_t port, std::string Dir);