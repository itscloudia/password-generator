#include <stdlib.h>
#include "password.h"
#include "utils.h"
#include "random.h"

char* generate_password(int length) {
    char* password = malloc((length + 1) * sizeof(char));
    int i;
    for (i = 0; i < length; i++) {
        int random = generate_random_int(0, 2);
        if (random == 0) {
            password[i] = generate_random_uppercase();
        } else if (random == 1) {
            password[i] = generate_random_lowercase();
        } else {
            password[i] = generate_random_digit();
        }
    }
    password[length] = '\0';
    return password;
}

char generate_random_uppercase() {
    return generate_random_char('A', 'Z');
}

char generate_random_lowercase() {
    return generate_random_char('a', 'z');
}

char generate_random_digit() {
    return generate_random_char('0', '9');
}

