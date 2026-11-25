#include "bob.h"
namespace bob {

// TODO: add your solution here
std::string remove_whitespace(std::string const& statement) {
    std::string result;
    for (char c : statement) {
        if (!std::isspace(c)) {
            result += c;
        }
    }
    return result;
}

std::string end_letter(std::string const& statement) {
    std::string trimmed_statement = remove_whitespace(statement);
    if (trimmed_statement.empty()) {
        return "";
    }
    return trimmed_statement.substr(trimmed_statement.size() - 1);
}

bool is_shouting(std::string const& statement) {
    bool has_letter = std::any_of(statement.begin(), statement.end(), [](unsigned char c) {
        return std::isalpha(c);
    });

    return has_letter && (statement == boost::to_upper_copy(statement));
}

std::string hey(std::string const& statement) {
    if (is_shouting(statement)) {
        if (end_letter(statement) == "?"){
            return "Calm down, I know what I'm doing!";
        }
        else{
            return "Whoa, chill out!";
        }
    }   
    else if(end_letter(statement) == "?"){
        return "Sure.";
    }
    else if(remove_whitespace(statement) == ""){
        return "Fine. Be that way!";
    }
    else{
        return "Whatever.";
    }
}
}  // namespace bob
