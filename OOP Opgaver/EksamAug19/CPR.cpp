

#include <cctype>
#include <cstring>
#include "CPR.h"
int checkCPR(const char* CPR) {
    // Check if CPR is exactly 11 characters long
    if (strlen(CPR) != 11) {
        return 0; // Not valid length
    }

    // Check format: "123456-1234"
    for (int i = 0; i < 11; ++i) {
        // Check if each character is a digit
        if (i != 6 && !isdigit(CPR[i])) {
            return 0; // Not a digit
        }

        // Check if the 7th character is '-'
        if (i == 6 && CPR[i] != '-') {
            return 0; // Invalid format
        }
    }

    // If all checks passed, return 1
    return 1;
}
