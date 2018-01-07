#include <string>
#include <stdlib.h>
#include <stdexcept>

using namespace std;

namespace hamming {
    int compute(string a, string b) {
        if (a.length() != b.length()) {
            throw domain_error("Different lengths");
        }

        int ham = 0;

        for (int i = 0; i < a.length(); i++) {
            if (a[i] != b[i]) {
                ham++;
            }
        }

        return ham;
    }
}