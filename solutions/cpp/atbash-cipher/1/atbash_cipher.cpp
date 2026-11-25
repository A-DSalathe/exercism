#include "atbash_cipher.h"

namespace atbash_cipher {

// TODO: add your solution here
std::string encode(const std::string& text){
    std::string result = "";
    std::string clean_text = "";
    for (char c : text) {
        if (std::isalpha(c) || std::isdigit(c)) {
            clean_text += std::tolower(c);
        }
    }
    int count = 0;
    for (char c : clean_text) {
        if (count % 5 == 0 && !result.empty()) {
            result += ' ';
        }
        if (std::isalpha(c)) {
            char encoded_char = 'a' + ('z' - std::tolower(c));
            result += encoded_char;
        } else if (std::isdigit(c)) {
            result += c;
        }
        count++;
        
    }
    return result;
}

std::string decode(const std::string& text){
    std::string result = "";
    std::string clean_text = "";
    
    for (char c : text) {
        if (c != ' ') {
            clean_text += c;
        }
    }
    for (char c : clean_text) {
        if (std::isalpha(c)) {
            char decoded_char = 'a' + ('z' - std::tolower(c));
            result += decoded_char;
        } else if (std::isdigit(c)) {
            result += c;
        }
    }
    return result;     
}

}  // namespace atbash_cipher
