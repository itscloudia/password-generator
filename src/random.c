#include <stdlib.h>
#include <time.h>
#include "random.h"

int generate_random_int(int min, int max) {
    static int seed = 0;
    if (seed == 0) {
        seed = time(NULL);
        srand(seed);
    }
    return rand() % (max - min + 1) + min;
}

char generate_random_char(char min, char max) {
    return (char) generate_random_int(min, max);
}

