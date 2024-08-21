#include <sstream>
#include <string>
#include <vector>

using std::vector, std::string;

namespace utils {

/// @brief Splits a string
/// @param delimiter Character to use for
/// splitting (defaults to a space)
vector<string> splitString(
    string inputString,
    char delimiter = ' ') {
    string token;
    vector<string> tokens;

    std::istringstream tokenStream(inputString);

    while (std::getline(tokenStream, token, ' ')) {
        tokens.push_back(token);
    }

    return tokens;
}
// class Utils {
//    public:
// };
}  // namespace utils
