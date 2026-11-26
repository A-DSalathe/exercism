#pragma once
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

namespace protein_translation {

// TODO: add your solution here
const std::unordered_map<std::string, std::string> codon_to_protein = {
    {"AUG", "Methionine"},
    {"UUU", "Phenylalanine"},
    {"UUC", "Phenylalanine"},
    {"UUA", "Leucine"},
    {"UUG", "Leucine"},
    {"UCU", "Serine"},
    {"UCC", "Serine"},
    {"UCA", "Serine"},
    {"UCG", "Serine"},
    {"UAU", "Tyrosine"},
    {"UAC", "Tyrosine"},
    {"UGU", "Cysteine"},
    {"UGC", "Cysteine"},
    {"UGG", "Tryptophan"},
    {"UAA", "STOP"},
    {"UAG", "STOP"},
    {"UGA", "STOP"}
};
std::vector<std::string> proteins(const std::string& rna);
    
}  // namespace protein_translation
