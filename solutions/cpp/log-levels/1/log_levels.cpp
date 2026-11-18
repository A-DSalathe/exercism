#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    std::string message_text;
    // Extract the message from the log line
    message_text = line.substr(line.find(":") + 2); // Assuming the message starts after the first "] "
    return message_text;
}

std::string log_level(std::string line) {
    // return the log level
    std::string level;
    // Extract the log level from the log line
    level = line.substr(1, line.find("]")-1); // Assuming the log level is enclosed in brackets
    return level;
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
