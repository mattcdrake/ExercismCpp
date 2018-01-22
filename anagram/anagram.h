#include <string>
#include <vector>

namespace anagram {
    class anagram {
        public:
            std::string original;

            anagram(std::string str) {
                original = str;
            }

            std::vector<std::string> matches(std::vector<std::string> &strs) {
                std::vector<std::string> output {};
                for (auto i : strs) {
                    if (isAnagram(original, i)) {
                        output.insert(output.end(), i);
                    }
                }
                return output;
            }

            int isAnagram(std::string str1, std::string str2) {
                // Immediately check that the std::strings are at least the same length
                if (str1.length() != str2.length()) {
                    return 0;
                }

                char* compareTo = new char[str2.length()];

                for (int i = 0; i < str2.length(); i++) {
                    compareTo[i] = str2[i];
                }

                int charFound;

                for (int i = 0; i < str1.length(); i++) {
                    charFound = 0;

                    for (int j = 0; j < str2.length(); j++) {
                        if (str1[i] = compareTo[j]) {
                            charFound = 1;
                            compareTo[j] = '\0';
                            j = str2.length();
                        }
                    }

                    if (!charFound) {
                        return 0;
                    }
                }

                return 1;
            }
    }
    ;
}