#pragma once
#include <iostream>
#include <cstdint>

void introduction();
std::uint16_t whatDoYouWant();
std::string getip();
std::uint16_t getPort();
std::string getPass();
void createRoom(std::uint16_t port, std::string pass);
void connectTo(std::string ip, std::uint16_t port, std::string pass);