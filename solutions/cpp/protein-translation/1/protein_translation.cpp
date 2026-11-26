#include "protein_translation.h"

namespace protein_translation {

// TODO: add your solution here

std::vector<std::string> proteins(const std::string& rna) {
    std::vector<std::string> result;
    for (size_t i = 0; i < rna.length(); i += 3) {
        std::string codon = rna.substr(i, 3);
        auto it = codon_to_protein.find(codon);
        if (it != codon_to_protein.end()) {
            if (it->second == "STOP") {
                break;
            }
            result.push_back(it->second);
        }
    }
    return result;
}

}  // namespace protein_translation
