#pragma once
#include <iostream>
#include <cstdint>
#include <limits>

void introduction();
std::uint16_t whatDoYouWant();
std::string getip();
std::uint16_t getPort();
std::string getPass();
std::string escapeForShell(const std::string& str);
void ignore();
std::uint16_t getValue(std::string msg, std::string errorMsg);
std::string getString(std::string msg, std::string errorMsg);
std::string getPwd();