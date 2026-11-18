#pragma once
#include <string>
#include <unordered_set>
namespace allergies {

// TODO: add your solution here
class allergy_test {
   public:
    allergy_test(unsigned int score);

    std::unordered_set<std::string> get_allergies();
    bool is_allergic_to(std::string allergen);

   private:
    unsigned int score_;
};
}  // namespace allergies
