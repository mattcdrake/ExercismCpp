#include <string>
#include <stdlib.h>

using namespace std;

// Function declarations
string trim(string str);
int yell_test(string str);

namespace bob {
    string hey(string input) {
        input = trim(input);

        if (input == "") {
            return "Fine. Be that way!";
        }

        if (yell_test(input)) {
            return "Whoa, chill out!";
        }

        if (input.at(input.length() - 1) == '?') {
            return "Sure.";
        }

        if (!input.length()) {
            return "Fine. Be that way!";
        }

        return "Whatever.";
    }
}

// Trims whitespace
string trim(string str) {
    int first = str.find_first_not_of(' ');
    if (first == string::npos) {
        return "";
    }
    int last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

// Iterates through the string checking to see if Bob is "yelling" by
// testing for all uppercase chars.
int yell_test(string str) {
    int upper_count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i]) && !isupper(str[i])) {
            return 0;
        }
        else if (isalpha(str[i])) {
            upper_count++;
        }
    }
    if (upper_count > 0) {
        return 1;
    }
    return 0;
}