#include "kindergarten_garden.h"

namespace kindergarten_garden {

// TODO: add your solution here
std::vector<std::array<Plants, 2>> parse_garden(const std::string& garden) {
    std::vector<std::array<Plants, 2>> result;
    int size_row = garden.find('\n');
    for (int i = 0; i < size_row; i += 1) {
        std::array<Plants, 2> column;
        for (int j = 0; j < 2; ++j) {
            char plant_char = garden[i + j*(size_row+1)];
            switch (plant_char) {
                case 'G':
                    column[j] = Plants::grass;
                    break;
                case 'C':
                    column[j] = Plants::clover;
                    break;
                case 'R':
                    column[j] = Plants::radishes;
                    break;
                case 'V':
                    column[j] = Plants::violets;
                    break;
                default:
                    return {}; // Invalid character, return empty vector
            }
        }
        result.push_back(column);
    }

    
    return result;
}
std::array<Plants, 4> plants(const std::string& garden, const std::string& student) {
    std::vector<std::array<Plants, 2>> parsed_garden = parse_garden(garden);
    int index = students.at(student)*2;
    std::array<Plants, 4> result;
    result[0] = parsed_garden[index][0];
    result[1] = parsed_garden[index + 1][0];
    result[2] = parsed_garden[index][1];
    result[3] = parsed_garden[index + 1][1];
    
    return result;
}

}  // namespace kindergarten_garden
