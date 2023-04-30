#include <stdio.h>
#include <stdlib.h>
#include "password.h"

int main(int argc, char *argv[]) {
    int length = 8;
    if (argc > 1) {
        length = atoi(argv[1]);
    }
    char* password = generate_password(length);
    printf("Generated password: %s\n", password);
    free(password);
    return 0;
}
