#include "allergies.h"

namespace allergies {

// TODO: add your solution here
allergy_test::allergy_test(unsigned int score) {
    score_ = score;
}
std::unordered_set<std::string> allergy_test::get_allergies() {
    std::unordered_set<std::string> allergies;
    if (score_ & 1) allergies.insert("eggs");
    if (score_ & 2) allergies.insert("peanuts");
    if (score_ & 4) allergies.insert("shellfish");
    if (score_ & 8) allergies.insert("strawberries");
    if (score_ & 16) allergies.insert("tomatoes");
    if (score_ & 32) allergies.insert("chocolate");
    if (score_ & 64) allergies.insert("pollen");
    if (score_ & 128) allergies.insert("cats");
    return allergies;
}
bool allergy_test::is_allergic_to(std::string allergen) {
    return get_allergies().count(allergen) > 0;
}

}  // namespace allergies
