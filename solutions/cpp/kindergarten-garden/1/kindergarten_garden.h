#pragma once
#include <string>
#include <array>
#include <vector>
#include <unordered_map>
namespace kindergarten_garden {

// TODO: add your solution here
enum class Plants { grass, clover, radishes, violets };
const std::unordered_map<std::string, int> students = {
    {"Alice", 0},   {"Bob", 1},     {"Charlie", 2}, {"David", 3},
    {"Eve", 4},     {"Fred", 5},    {"Ginny", 6},   {"Harriet", 7},
    {"Ileana", 8},  {"Joseph", 9},  {"Kincaid", 10},{"Larry", 11},
};
// I want a functio that takes a stromg and return it into a n by 2 vector of plants
std::vector<std::array<Plants, 2>> parse_garden(const std::string& garden);
std::array<Plants, 4> plants(const std::string& garden, const std::string& student);
}  // namespace kindergarten_garden
