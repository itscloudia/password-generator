#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void print_error(char* message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(1);
}
