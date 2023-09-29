#include <stdlib.h>
#include <main.h>

unsigned int binary_to_uint(const char *b) {
    if (b == NULL) {
        return 0;  // NULL pointer case
    }

    size_t length = strlen(b);
    unsigned int result = 0;

    for (size_t i = 0; i < length; i++) {
        if (b[i] != '0' && b[i] != '1') {
            return 0;  // Non-binary character case
        } 
        result += (b[i] - '0') * pow(2, length - i - 1);
    }

    return result;
}
