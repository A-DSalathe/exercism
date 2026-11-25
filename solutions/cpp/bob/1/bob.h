#pragma once
#include <string>
#include <boost/algorithm/string.hpp>

namespace bob {

// TODO: add your solution here
std::string remove_whitespace(std::string const& statement);
std::string end_letter(std::string const& statement);
bool is_shouting(std::string const& statement);
std::string hey(std::string const& statement);
}  // namespace bob
